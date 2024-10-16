/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 11:46:37 by mszlicht          #+#    #+#             */
/*   Updated: 2024/02/28 12:09:46 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= ' ' && c <= '~')
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

        if(ft_isprint(znak)) {
                printf("%c jest drukowalne. \n", znak);
        }
        else {
                printf("%c nie jest drukowalne. \n", znak);
        }
        return 0;
}*/
