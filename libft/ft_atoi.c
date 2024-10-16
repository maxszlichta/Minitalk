/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:42:17 by mszlicht          #+#    #+#             */
/*   Updated: 2024/03/06 10:35:12 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	m;
	int	a;
	int	res;

	m = 0;
	a = 1;
	res = 0;
	while (str[m] == ' ' || str[m] == '\n' || str[m] == '\t'
		|| str[m] == '\v' || str[m] == '\f' || str[m] == '\r')
		m++;
	if (str[m] == '-' || str[m] == '+')
	{
		if (str[m] == '-')
			a = -1;
		m++;
	}
	while (str[m] >= '0' && str[m] <= '9')
	{
		res = (res * 10) + (str[m] - '0');
		m++;
	}
	return (res * a);
}
/*
#include <stdio.h>

int main() {
    
    const char *str1 = "12345";
    const char *str2 = "Max";
    const char *str3 = "42 is the answer";
    const char *str4 = "-123abc";

    printf("ft_atoi(\"%s\") = %d\n", str1, ft_atoi(str1));
    printf("ft_atoi(\"%s\") = %d\n", str2, ft_atoi(str2));
    printf("ft_atoi(\"%s\") = %d\n", str3, ft_atoi(str3));
    printf("ft_atoi(\"%s\") = %d\n", str4, ft_atoi(str4));

    return 0;
}*/
