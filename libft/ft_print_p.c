/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_p.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <mszlicht@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 11:23:21 by mszlicht          #+#    #+#             */
/*   Updated: 2024/07/23 16:09:41 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_print_p(size_t pointer, int *len)
{
	char	string[25];
	char	*base_char;
	int		i;

	i = 0;
	base_char = "0123456789abcdef";
	if (pointer == 0)
	{
		write(1, "(nil)", 5);
		(*len) += 5;
		return ;
	}
	else
	{
		write(1, "0x", 2);
		(*len) += 2;
		while (pointer != 0)
		{
			string[i] = base_char[pointer % 16];
			pointer = pointer / 16;
			i++;
		}
		while (i--)
			ft_print_c(string[i], len);
	}
}
