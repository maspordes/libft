/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:14:15 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 17:31:53 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
/*
#include <stdio.h>

int	main(void)
{
	int *arr;
	size_t i;

	arr = ft_calloc(5, sizeof(int));
	if (!arr)
	{
		printf("Memory allocation failed\n");
		return (1);
	}

	for (i = 0; i < 5; i++)
		printf("arr[%zu] = %d\n", i, arr[i]);

	free(arr); // Don't forget to free the allocated memory
	return (0);
}
*/