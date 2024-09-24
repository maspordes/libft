/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:14:24 by marrey            #+#    #+#             */
/*   Updated: 2024/09/24 13:14:26 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_isalnum(int c)
{
    return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') 
        || (c >= '0' && c <= '9'));
}
/*#include <stdio.h>

int main(void)
{
    char test_chars[] = {'a', 'Z', '1', '!', ' ', '9', 'g', 'B'};
    for (size_t i = 0; i < sizeof(test_chars); i++)
    {
        printf("ft_isalnum('%c'): %d\n", test_chars[i], ft_isalnum(test_chars[i]));
    }
    return (0);
}
*/