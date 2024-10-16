/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_d.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <mszlicht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:22:24 by mszlicht          #+#    #+#             */
/*   Updated: 2024/07/23 16:09:26 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_d(int digit, int *len)
{
	if (digit == -2147483648)
	{
		write(1, "-2147483648", 11);
		(*len) += 11;
		return ;
	}
	else if (digit < 0)
	{
		ft_print_c('-', len);
		ft_print_d(-digit, len);
	}
	else
	{
		if (digit > 9)
			ft_print_d(digit / 10, len);
		ft_print_c(digit % 10 + '0', len);
	}
}
