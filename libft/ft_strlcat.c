/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:19:59 by mszlicht          #+#    #+#             */
/*   Updated: 2024/03/06 12:07:16 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	c;
	size_t	d;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	c = ft_strlen(dst);
	d = 0;
	while (src[d] != '\0' && c + 1 < dstsize)
	{
		dst[c] = src[d];
		c++;
		d++;
	}
	dst[c] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[d]));
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char dst[20] = "Hello, ";
    const char *src = "world!";
    size_t dstsize = sizeof(dst);

    size_t result = ft_strlcat(dst, src, dstsize);

    printf("Połączony ciąg: \"%s\"\n", dst);
    printf("Długość połączonego ciągu: %zu\n", result);

    return 0;
}*/
