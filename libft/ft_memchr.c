/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:15:05 by mszlicht          #+#    #+#             */
/*   Updated: 2024/03/06 11:04:09 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main() {

	unsigned char arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	size_t n = sizeof(arr);
	int search_char = 5;

	void *result = ft_memchr(arr, search_char, n);
	
	if (result != NULL) {
		printf("Znaleziono znak %d w tablicy na indeksie: %ld\n",
		search_char, ((unsigned char*)result - arr));
    } else {
        printf("Nie znaleziono znaku %d w tablicy.\n", search_char);
    }

    return 0;
}*/
