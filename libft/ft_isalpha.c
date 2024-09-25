/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:14:36 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 17:45:11 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/*
#include <stdio.h>
#include <ctype.h> 

int main() {
    char c = 'A';
    printf("Standard isalpha('%c'): %d\n", c, isalpha(c));  // Should print 1
    printf("ft_isalpha('%c'): %d\n", c, ft_isalpha(c));  // Should print 1
    
    c = '1';
    printf("Standard isalpha('%c'): %d\n", c, isalpha(c));  // Should print 0
    printf("ft_isalpha('%c'): %d\n", c, ft_isalpha(c));  // Should print 0
    
    return 0;
}
*/