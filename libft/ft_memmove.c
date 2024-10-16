/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:17:47 by mszlicht          #+#    #+#             */
/*   Updated: 2024/03/15 16:15:23 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	s = (char *)src;
	d = (char *)dest;
	i = 0;
	if (d > s)
	{
		while (n -- > 0)
			d[n] = s[n];
	}
	else
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dest);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned char src[] = {1, 2, 3, 4, 5};
    unsigned char dst[5];
    size_t n = sizeof(src);

    ft_memmove(dst, src, n);

    printf("Tablica docelowa po przeniesieniu:\n");
    for (size_t i = 0; i < n; i++) {
        printf("%d ", dst[i]);
    }
    printf("\n");

    return 0;
}*/
