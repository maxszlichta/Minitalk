/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:36:10 by mszlicht          #+#    #+#             */
/*   Updated: 2024/03/06 14:01:50 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	srcsize;
	size_t	i;

	if (!dst || !src)
		return (0);
	srcsize = ft_strlen(src);
	i = 0;
	if (dstsize != 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    char dst[20];
    const char *src = "Hello, world!";
    size_t dstsize = sizeof(dst);

    size_t result = ft_strlcpy(dst, src, dstsize);

    printf("Skopiowany ciąg: \"%s\"\n", dst);
    printf("Długość skopiowanego ciągu: %zu\n", result);

    return 0;
}*/
