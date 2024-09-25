/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:32:38 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 20:36:22 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = ft_strlen(s);
	if (c == '\0')
		return (str + i);
	while (i != 0)
	{
		if (str[i] == (char)c)
			return (str + i);
		i--;
	}
	if (s[0] == (char)c)
		return (str);
	return (0);
}

/*int main() {
    const char *str = "Hello, World!";
    char *result1 = strrchr(str, 'o');
    char *result2 = ft_strrchr(str, 'o');

    printf("Standard strrchr result: %s\n", result1);
    printf("ft_strrchr result: %s\n", result2);
    
    return 0;
}*/
