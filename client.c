/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <mszlicht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:15:42 by mszlicht          #+#    #+#             */
/*   Updated: 2024/07/23 19:51:31 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>

static int      potential_errors(int argc, char *argv[])
{
    int i;
    
    if (argc != 3)
        return (1);
        
    i = -1;
	while (argv[1][++i])
	{
		if (!ft_strchr("0123456789", argv[1][i]))
			return (1);
	}
	return (0);
}
static void	sending_len(int len, int pid)
{
	int	i;

	i = -1;
	while (++i < 32)
	{
		if (len & 0x01)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		len = len >> 1;
		usleep(100);
	}
}

static void	sending_char(unsigned char c, int pid)
{
	int	i;

	i = -1;
	while (++i < 8)
	{
		if (c & 0x01)
			kill(pid, SIGUSR2);
		else
			kill(pid, SIGUSR1);
		c = c >> 1;
		usleep(100);
	}
}

int main(int argc, char *argv[])
{
    int     pid;
    char    *text;
    int     len;
    int     i;
    
    if (potential_errors(argc, argv))
		return (-1);

	pid = ft_atoi(argv[1]);
	if (pid <= 0)
		return (-1);
    
    text = argv[2];
    len = ft_strlen(text);
    
    i = -1;
    sending_len(len, pid);
    while (text[++i])
		sending_char(text[i], pid);
	sending_char(text[i], pid);
}