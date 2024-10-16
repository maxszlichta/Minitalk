/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 14:31:41 by mszlicht          #+#    #+#             */
/*   Updated: 2024/03/07 11:56:28 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*ret;

	if (!s)
		return (0);
	if (ft_strlen(s) < start)
		len = 0;
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ft_strlcpy(ret, s + start, len + 1);
	return (ret);
}
/*
#include "libft.h"
#include <stdio.h>

int main(void)
{
    char const *str = "Hello, world!";
    unsigned int start = 7;
    size_t len = 5;

    char *sub_str = ft_substr(str, start, len);
    if (sub_str)
    {
        printf("Substring: %s\n", sub_str);
        free(sub_str);
    }
    else
    {
        printf("Failed to allocate memory.\n");
    }

    return 0;
}*/
