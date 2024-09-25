/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:25:36 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 16:25:37 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = s;
	while (n--)
	{
		*ptr++ = (unsigned char)c;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char str1[50] = "Hello, World!";
    char str2[50] = "Hello, World!";

    printf("Before ft_memset: %s\n", str1);
    ft_memset(str1, 'x', 5);
    printf("After ft_memset: %s\n", str1);  // Expected: "xxxxx, World!"

    printf("Before memset: %s\n", str2);
    memset(str2, 'x', 5);
    printf("After memset: %s\n", str2);  // Expected: "xxxxx, World!"

    return 0;
}*/
