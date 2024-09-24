/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:46:13 by marrey            #+#    #+#             */
/*   Updated: 2024/09/24 13:46:17 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if ('0' <= c && c <= '9')
		return (1);
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int main(void)
{
    char test_chars[] = {'0', '5', '9', 'A', '!', ' ', '3', 'Z'};
    for (size_t i = 0; i < sizeof(test_chars); i++)
    {
        printf("Standard isdigit('%c'): %d\n", test_chars[i], isdigit(test_chars[i]));  // Standard function
        printf("ft_isdigit('%c'): %d\n", test_chars[i], ft_isdigit(test_chars[i]));      // Your function
    }
    return 0;
}

*/