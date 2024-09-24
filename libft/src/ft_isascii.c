/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:45:59 by marrey            #+#    #+#             */
/*   Updated: 2024/09/24 13:46:03 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
/*
#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main() {
    int test_chars[] = {0, 65, 127, 128, -1, 'A', 'a', '!', ' '}; // Including some ASCII and non-ASCII characters

    for (size_t i = 0; i < sizeof(test_chars) / sizeof(test_chars[0]); i++) {
        int c = test_chars[i];
        printf("Standard isascii(%d): %d\n", c, isascii(c));  // Standard function
        printf("ft_isascii(%d): %d\n", c, ft_isascii(c));      // Custom function
    }
    
    return 0;
}
*/
