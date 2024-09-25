/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:34:39 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 19:34:40 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0')
		len++;
	return (len);
}
/*int main() {
    const char *str = "Hello, World!";
    printf("Standard strlen result: %zu\n", strlen(str));  // Should print length
    printf("ft_strlen result: %zu\n", ft_strlen(str));  // Should print length
    
    return 0;
}*/
