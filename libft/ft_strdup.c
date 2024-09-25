/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:28:58 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 19:30:08 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	len;

	len = strlen(s);
	dup = (char *)malloc(len + 1);
	if (!dup)
		return (NULL);
	strcpy(dup, s);
	return (dup);
}

/*int main() {
    const char *original = "Hello";
    char *duplicate1 = strdup(original);
    char *duplicate2 = ft_strdup(original);

    printf("Standard strdup result: %s\n", duplicate1);  // Should print "Hello"
    printf("ft_strdup result: %s\n", duplicate2);  // Should also print "Hello"
    
    free(duplicate1);
    free(duplicate2);
    return 0;
}*/
