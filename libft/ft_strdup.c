/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 16:52:21 by mszlicht          #+#    #+#             */
/*   Updated: 2024/03/06 12:20:52 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(char *s)
{
	int		len;
	char	*str;

	len = 0;
	while (s[len])
		len++;
	str = (char *)malloc(len + 1);
	if (str == NULL)
		return (NULL);
	while (len >= 0)
	{
		str[len] = s[len];
		len--;
	}
	return (str);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main() 
{
    const char *original_str = "Hello, world!";

    char *duplicate_str = ft_strdup(original_str);

    if (duplicate_str == NULL) {
        printf("Nie udało się zaalokować pamięci.\n");
        return 1;
    }

    printf("Duplikat ciągu \"%s\": \"%s\"\n", original_str, duplicate_str);

    free(duplicate_str);

    return 0;
}*/
