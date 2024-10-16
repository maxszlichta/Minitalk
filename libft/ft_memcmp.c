/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:22:03 by mszlicht          #+#    #+#             */
/*   Updated: 2024/03/06 12:22:11 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
			return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char arr1[] = {1, 2, 3, 4, 5};
    unsigned char arr2[] = {1, 2, 3, 4, 6};
    size_t n = sizeof(arr1);

    int result = ft_memcmp(arr1, arr2, n);

    if (result == 0) {
        printf("Tablice są identyczne.\n");
    } else if (result < 0) {
        printf("Tablica s1 jest mniejsza od tablicy s2.\n");
    } else {
        printf("Tablica s1 jest większa od tablicy s2.\n");
    }

    return 0;
}*/
