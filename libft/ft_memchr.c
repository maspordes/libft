/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:03:21 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 18:05:07 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		if (*ptr == (unsigned char)c)
			return (ptr);
		ptr++;
	}
	return (NULL);
}

/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    const char *str = "Hello, World!";
    char c = 'o';
    size_t n = 10;

    char *result_ft = ft_memchr(str, c, n);
    char *result_std = memchr(str, c, n);

    if (result_ft)
        printf("ft_memchr: Found '%c' at position: %ld\n", 
        *result_ft, result_ft - str);
    else
        printf("ft_memchr: Character not found\n");

    if (result_std)
        printf("memchr: Found '%c' at position: %ld\n", 
        *result_std, result_std - str);
    else
        printf("memchr: Character not found\n");

    return 0;
}
*/
