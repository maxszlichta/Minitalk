/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 10:37:34 by mszlicht          #+#    #+#             */
/*   Updated: 2024/03/07 10:39:19 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, s + i);
		i++;
	}
}
/*
#include <stdio.h>

void	print_index_char(unsigned int index, char *c)
{
	printf("Index: %u, Character: %c\n", index, *c);
}

int main()
{
	char str[] = "Hello, World!";
	printf("Original string: %s\n", str);

	ft_striteri(str, &print_index_char);

	return 0;
}*/
