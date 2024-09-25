/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 18:05:31 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 18:46:21 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    const char *str1 = "Hello";
    const char *str2 = "Hello";
    const char *str3 = "Hello, World!";
    size_t n = 5;

    int result_ft = ft_memcmp(str1, str2, n);
    int result_std = memcmp(str1, str2, n);
    printf("Comparing \"%s\" and \"%s\":\n", str1, str2);
    printf("ft_memcmp: %d\n", result_ft);
    printf("memcmp: %d\n", result_std);

    result_ft = ft_memcmp(str1, str3, n);
    result_std = memcmp(str1, str3, n);
    printf("Comparing \"%s\" and \"%s\":\n", str1, str3);
    printf("ft_memcmp: %d\n", result_ft);
    printf("memcmp: %d\n", result_std);

    return 0;
}
*/
