/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mszlicht <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 15:09:05 by mszlicht          #+#    #+#             */
/*   Updated: 2024/03/18 14:51:40 by mszlicht         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *arr;
    size_t count = 5;
    size_t size = sizeof(int);

    arr = (int *)ft_calloc(count, size);

    if (arr == NULL) {
        printf("Nie udało się zaalokować pamięci.\n");
        return 1;
    }

    printf("Zainicjowane wartości tablicy:\n");
    for (size_t i = 0; i < count; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}*/
