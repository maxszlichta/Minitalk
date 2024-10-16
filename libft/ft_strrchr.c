/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 09:48:31 by mszlicht          #+#    #+#             */
/*   Updated: 2024/03/18 13:14:07 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	cc;
	int		i;

	cc = (char)c;
	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == cc)
			return ((char *)&s[i]);
		i--;
	}
	return (0);
}
/*
#include <stdio.h>
#include "libft.h"

int main() {
    const char *str = "Hello, World!";
    int c = 'o';

    char *result = ft_strrchr(str, c);

    if (result != NULL) {
        printf("Znaleziono znak '%c' w stringu: %s\n", c, result);
    } else {
        printf("Nie znaleziono znaku '%c' w stringu.\n", c);
    }

    return 0;
}*/
