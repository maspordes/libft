/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:35:16 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 19:35:55 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((str1[i] || str2[i]) && i < n)
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
/*int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    printf("Standard strncmp: %d\n", strncmp(str1, str2, 5));  
    printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, 5));  
    str2[1] = 'a';  // Change one character
    printf("Standard strncmp: %d\n", strncmp(str1, str2, 5));
    printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, 5));

    return 0;
}*/
