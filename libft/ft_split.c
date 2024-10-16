/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:37:02 by mszlicht          #+#    #+#             */
/*   Updated: 2024/03/15 10:39:45 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;

	if (!*s)
		return (0);
	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;
	size_t	word_len;
	int		i;

	lst = (char **)malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!s || !lst)
		return (0);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				word_len = ft_strlen(s);
			else
				word_len = ft_strchr(s, c) - s;
			lst[i++] = ft_substr(s, 0, word_len);
			s += word_len;
		}
	}
	lst[i] = NULL;
	return (lst);
}
/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char *str = "Napisalem kod do sprawdzenia funkcji
     ktora wlasnie napisalem w 42 Warsaw";
    char **splitted_str = ft_split(str, ' ');

    if (splitted_str)
    {
        int i = 0;
        while (splitted_str[i])
        {
            printf("%s\n", splitted_str[i]);
            free(splitted_str[i]);
            i++;
        }
        free(splitted_str);
    }
    else
    {
        printf("Nie udalo sie wczytac pamieci.\n");
    }

    return 0;
}*/
