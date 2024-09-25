/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:08:51 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 19:11:27 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *)src;
	if (d == s || len == 0)
		return (dst);
	if (d < s)
	{
		while (len--)
			*d++ = *s++;
	}
	else
	{
		d += len;
		s += len;
		while (len--)
			*(--d) = *(--s);
	}
	return (dst);
}

/*
#include <stdio.h>
#include <string.h>
#include "libft.h"

void	print_results(const char *desc, const char *original, const char *result)
{
	printf("=== %s ===\n", desc);
	printf("Original: %s\n", original);
	printf("Result:   %s\n", result);
	printf("\n");
}

int	main(void)
{
	// Non-overlapping test
	char	str1_non_overlap[50] = "Hello, World!";
	ft_memmove(str1_non_overlap + 7, str1_non_overlap, 6);
	print_results("Non-Overlapping Test",
		"Hello, World!", str1_non_overlap);

	// Reset str1
	strcpy(str1_non_overlap, "Hello, World!");

	// Overlapping test
	char	str1_overlap[50] = "Hello, World!";
	ft_memmove(str1_overlap + 5, str1_overlap, 7);
	print_results("Overlapping Test",
		"Hello, World!", str1_overlap);

	// Standard memmove comparison for non-overlapping
	char	str2_non_overlap[50] = "Goodbye, World!";
	memmove(str2_non_overlap + 8, str2_non_overlap, 7);
	print_results("Standard memmove Non-Overlapping",
		"Goodbye, World!", str2_non_overlap);

	// Standard memmove comparison for overlapping
	char	str2_overlap[50] = "Goodbye, World!";
	memmove(str2_overlap + 5, str2_overlap, 7);
	print_results("Standard memmove Overlapping",
		"Goodbye, World!", str2_overla

*/
