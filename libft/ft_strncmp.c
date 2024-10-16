/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:38:47 by mszlicht          #+#    #+#             */
/*   Updated: 2024/03/06 13:59:36 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    const char *str1 = "Hello";
    const char *str2 = "Helloworld";
    size_t n = 5;

    int result = ft_strncmp(str1, str2, n);

    int standard_result = strncmp(str1, str2, n);

    printf("Wynik ft_strncmp(): %d\n", result);
    printf("Wynik strncmp(): %d\n", standard_result);

    return 0;
}*/
