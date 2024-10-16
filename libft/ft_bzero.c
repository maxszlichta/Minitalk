/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 13:46:11 by mszlicht          #+#    #+#             */
/*   Updated: 2024/03/18 14:02:17 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((char *)s)[i] = 0;
		i++;
	}
}
/*

#include<stdio.h>
int main() {
    
    char str[11] = "Maksymilian";

    printf("String przed uzyciem funkcji: %s\n", str);

    ft_bzero(str, sizeof(str));

    printf("String po uzyciu funkcji: %s\n", str);

    return 0;
}*/
