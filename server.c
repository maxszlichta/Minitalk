/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <mszlicht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:15:26 by mszlicht          #+#    #+#             */
/*   Updated: 2024/07/23 19:40:20 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sched.h>
#include <signal.h>
#include "libft/libft.h"

static void	ft_receive_strlen(int *curr_bit, char **str, int *received, int s)
{
	static int	len_val = 0;

	if (s == SIGUSR2)
		len_val += ft_recursive_power(2, *curr_bit);
	if (*curr_bit == 31)
	{
		*received = 1;
		*str = ft_calloc_exit(len_val + 1, sizeof(char));
		*curr_bit = 0;
		len_val = 0;
		return ;
	}
	(*curr_bit)++;
}

static void	ft_restart_variables(int *len_received, char **str, int *i)
{
	*len_received = 0;
	if (str)
	{
		ft_putendl_fd(*str, 1);
		free(*str);
		*str = 0;
	}
	*i = 0;
}

static void	ft_receive_client(int signal)
{
	static int	char_value = 0;
	static int	bit = 0;
	static int	len = 0;
	static int	i = 0;
	static char	*str = 0;

	if (!len)
		ft_receive_strlen(&bit, &str, &len, signal);
	else
	{
		if (signal == SIGUSR2)
			char_value += ft_recursive_power(2, bit);

		if (bit == 7)
		{
			str[i++] = char_value;
			bit = 0;
			if (char_value == 0)
				return (ft_restart_variables(&len, &str, &i));
			char_value = 0;
			return ;
		}
		bit++;
	}
}

int main()
{
    /*  Getting PID and displaying it */
    pid_t pid = getpid();
    ft_printf("Server PID: %d\n", pid);

    signal(SIGUSR1, ft_receive_client);
	signal(SIGUSR2, ft_receive_client);

    /* An endless loop that keeps server running */
    while (1)
        usleep(100);
    return 0;
}