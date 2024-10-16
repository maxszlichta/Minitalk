/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 12:32:53 by mszlicht          #+#    #+#             */
/*   Updated: 2024/02/28 12:05:36 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		c = 1;
	else
		c = 0;
	return (c);
}
/*
#include <stdio.h>
int main()
{
        char znak = 'A';

        if(ft_isdigit(znak)) {
                printf("%c miesci sie w przedziale 0-9. \n", znak);
        }
        else {
                printf("%c nie miesci sie w przedziale 0-9. \n", znak);
        }

        return 0;
}*/
