/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 15:26:30 by mszlicht          #+#    #+#             */
/*   Updated: 2024/03/07 11:59:36 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*ret;
	size_t	len;

	if (!s1 || !s2)
		return (0);
	len = ft_strlen(s1) + ft_strlen(s2);
	ret = malloc(sizeof(char) * (len + 1));
	if (!ret)
		return (0);
	ft_strlcpy(ret, s1, len + 1);
	ft_strlcat(ret, s2, len + 1);
	return (ret);
}
/*
#include <stdio.h>

int main(void)
{
    char *str1 = "Hello, ";
    char *str2 = "world!";
    char *joined_str = ft_strjoin(str1, str2);

    if (joined_str)
    {
        printf("Polaczony string: %s\n", joined_str);
        free(joined_str);
    }
    else
    {
        printf("Nie udalo sie przeniesc pamieci.\n");
    }

    return 0;
}*/
