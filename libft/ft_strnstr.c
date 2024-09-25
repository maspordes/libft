/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:36:16 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 19:37:07 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	while (*haystack && len >= needle_len)
	{
		if (strncmp(haystack, needle, needle_len) == 0)
			return ((char *)haystack);
		haystack++;
		len--;
	}
	return (NULL);
}

/*int main() {
    const char *haystack = "Hello, World!";
    const char *needle = "World";

    char *result1 = strnstr(haystack, needle, 15);
    char *result2 = ft_strnstr(haystack, needle, 15);

    printf("Standard strnstr result: %s\n", result1);  // Should print "World!"
    printf("ft_strnstr result: %s\n", result2);  // Should print "World!"
    
    return 0;
}*/
