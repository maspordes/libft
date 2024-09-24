/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:50:47 by marrey            #+#    #+#             */
/*   Updated: 2024/09/24 13:50:50 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
#include <stdio.h>
#include <ctype.h>
/*
int main(void)
{
    char test_chars[] = {'\0', ' ', '!', '@', '~', 127}; // '\0' is non-printable, 127 is DEL
    for (size_t i = 0; i < sizeof(test_chars); i++)
    {
        printf("Standard isprint('%c'): %d\n", test_chars[i], (int)isprint(test_chars[i]));  // Cast to int
        printf("ft_isprint('%c'): %d\n", test_chars[i], ft_isprint(test_chars[i]));          // Your function
    }
    return 0;
}
*/