/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 17:53:52 by mszlicht          #+#    #+#             */
/*   Updated: 2024/03/06 14:01:06 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	h = 0;
	if (needle[0] == '\0')
		return ((char *)haystack);
	while (haystack[h] != '\0')
	{
		n = 0;
		while (haystack[h + n] == needle[n] && (h + n) < len)
		{
			if (haystack[h + n] == '\0' && needle[n] == '\0')
				return ((char *)&haystack[h]);
			n++;
		}
		if (needle[n] == '\0')
			return ((char *)haystack + h);
		h++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
    const char *haystack = "Hello, world!";
    const char *needle1 = "world";
    const char *needle2 = "people";
    size_t len = strlen(haystack);

    char *result1 = ft_strnstr(haystack, needle1, len);
    char *result2 = ft_strnstr(haystack, needle2, len);

    printf("Wynik dla \"%s\" w \"%s\": %s\n",
    needle1, haystack, result1 ? result1 : "(null)");
    printf("Wynik dla \"%s\" w \"%s\": %s\n",
    needle2, haystack, result2 ? result2 : "(null)");

    return 0;
}*/
