/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:45:53 by mszlicht          #+#    #+#             */
/*   Updated: 2024/03/18 12:34:45 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	char	*str;
	char	cc;

	cc = (char)c;
	str = (char *)s;
	while (*str != cc)
	{
		if (*str == '\0')
		{
			return (NULL);
		}
		str++;
	}
	return (str);
}
/*
#include <stdio.h>

int main() 
{
    const char *str = "tripouille";
    int search_char = 't' + 256;

    char *result = ft_strchr(str, search_char);

    if (result != NULL) {
        printf("Znaleziono znak '%c' w ciągu \"%s\" na indeksie: %ld\n",
        search_char, str, (result - str));
    } else {
        printf("Nie znaleziono znaku '%c' w ciągu \"%s\".\n",
        search_char, str);
    }

    return 0;
}*/
