/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:30:27 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 16:30:29 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	substr = (char *)malloc(len + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/*int main(void) {
    char *s = "Hello, world!";
    char *result;

    // Test case 1: Extract "world" from "Hello, world!"
    result = ft_substr(s, 7, 5);
    printf("Result 1: %s\n", result);  // Expected output: world
    free(result);

    // Test case 2: Extract "Hello" from "Hello, world!"
    result = ft_substr(s, 0, 5);
    printf("Result 2: %s\n", result);  // Expected output: Hello
    free(result);

    // Test case 3: Extract an empty string (start out of bounds)
    result = ft_substr(s, 20, 5);
    printf("Result 3: %s\n", result);  // Expected output: (empty string)
    free(result);

    return 0;
}
*/
