/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <mszlicht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 12:56:47 by mszlicht          #+#    #+#             */
/*   Updated: 2024/07/23 16:09:58 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_format(char s, va_list *args, int *len, int *i)
{
	if (s == 'c')
		ft_print_c(va_arg(*args, int), len);
	else if (s == 's')
		ft_print_s(va_arg(*args, char *), len);
	else if (s == 'p')
		ft_print_p(va_arg(*args, size_t), len);
	else if (s == 'd' || s == 'i')
		ft_print_d(va_arg(*args, int), len);
	else if (s == 'u')
		ft_print_u(va_arg(*args, unsigned int), len);
	else if (s == 'x')
		ft_print_hex(va_arg(*args, unsigned int), len, 'x');
	else if (s == 'X')
		ft_print_hex(va_arg(*args, unsigned int), len, 'X');
	else if (s == '%')
		ft_print_c('%', len);
	else
		(*i)--;
}

int	ft_printf(const char *string, ...)
{
	va_list	args;
	int		len;
	int		i;

	i = 0;
	len = 0;
	va_start(args, string);
	while (string[i] != '\0')
	{
		if (string[i] == '%')
		{
			i++;
			ft_format(string[i], &args, &len, &i);
			i++;
		}
		else
		{
			ft_print_c((char)string[i], &len);
			i++;
		}
	}
	va_end(args);
	return (len);
}