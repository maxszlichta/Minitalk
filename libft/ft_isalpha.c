/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:22:01 by mszlicht          #+#    #+#             */
/*   Updated: 2024/02/28 12:08:19 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = 1;
	else if (c >= 'a' && c <= 'z')
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

	if(ft_isalpha(znak)) {
		printf("%c jest litera. \n", znak);
	}
	else {
		printf("%c nie jest litera. \n", znak);
	}

	return 0;
}*/
