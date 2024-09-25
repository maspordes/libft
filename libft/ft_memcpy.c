/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:46:38 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 19:08:26 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char src[] = "Hello, World!";
    char dst[50];

    // Using standard memcpy
    memcpy(dst, src, 13);
    dst[13] = '\0'; // Null-terminate the string
    printf("Standard memcpy: %s\n", dst);

    // Using ft_memcpy
    char dst_ft[50]; // Reset destination buffer
    ft_memcpy(dst_ft, src, 13);
    dst_ft[13] = '\0'; // Null-terminate the string
    printf("ft_memcpy: %s\n", dst_ft);

    return 0;
}
*/
