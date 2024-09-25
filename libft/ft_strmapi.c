/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:03:40 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 16:03:45 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*result;
	size_t	i;

	if (!s || !f)
		return (NULL);
	result = (char *)malloc(ft_strlen(s) + 1);
	if (!result)
		return (NULL);
	i = 0;
	while (s[i])
	{
		result[i] = f(i, s[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}

/*
#include <stdio.h>
#include "libft.h"

// Sample function to modify the character
char	change_case(unsigned int index, char c)
{
	if (index % 2 == 0)
		return (c - 32); // Convert to uppercase
	return (c); // Leave as is
}

int	main(void)
{
	char str[] = "abcdef";
	char *modified_str;

	modified_str = ft_strmapi(str, change_case);
	if (modified_str)
	{
		printf("Original string: %s\n", str);
		printf("Modified string: %s\n", modified_str); // Expected: "AbCdEf"
		free(modified_str);
	}
	else
	{
		printf("Memory allocation failed!\n");
	}

	return 0;
}
*/
