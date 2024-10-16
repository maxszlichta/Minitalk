/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:25:32 by mszlicht          #+#    #+#             */
/*   Updated: 2024/03/14 15:04:01 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char src[] = {1, 2, 3, 4, 5};
    unsigned char dst[5];
    size_t n = sizeof(src);

    ft_memcpy(dst, src, n);

    printf("Tablica docelowa po skopiowaniu:\n");
    for (size_t i = 0; i < n; i++) {
        printf("%d ", dst[i]);
    }
    printf("\n");

    return 0;
}*/
