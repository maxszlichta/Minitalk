/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:03:39 by mszlicht          #+#    #+#             */
/*   Updated: 2024/02/28 11:45:09 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = 1;
	else if (c >= 'a' && c <= 'z')
		c = 1;
	else if (c <= '9' && c >= '0')
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

        if(ft_isalnum(znak)) {
                printf("%c jest litera lub cyfra. \n", znak);
        }
        else {
                printf("%c nie jest litera lub cyfra. \n", znak);
        }

        return 0;
}*/
