/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:43:23 by mszlicht          #+#    #+#             */
/*   Updated: 2024/03/15 14:15:14 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	else if (n < 0)
	{
		ft_putchar_fd('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd(n % 10 + '0', fd);
	}
	else
		ft_putchar_fd(n + '0', fd);
}
/*
#include <unistd.h>

int main()
{
    int num1 = 12345;
    int num2 = -6789;

    ft_putnbr_fd(num1, STDOUT_FILENO);
    ft_putchar_fd('\n', STDOUT_FILENO);
    ft_putnbr_fd(num2, STDOUT_FILENO);
    ft_putchar_fd('\n', STDOUT_FILENO);

    return 0;
}*/
