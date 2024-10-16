/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:38:28 by mszlicht          #+#    #+#             */
/*   Updated: 2024/02/28 12:10:53 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		c = 1;
	}
	else
	{
		c = 0;
	}
	return (c);
}
/*
#include <stdio.h>
int main()
{
        char znak = 'A';

        if(ft_isascii(znak)) {
                printf("%c jest litera. \n", znak);
        }
        else {
                printf("%c nie jest litera. \n", znak);
        }
        return 0;
}*/
