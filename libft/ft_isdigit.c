/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:46:13 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 17:50:05 by marrey           ###   ########.fr       */
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
#include "libft.h"

int main(void)
{
    char test_chars[] = {'0', '5', '9', 'A', '!', ' ', '3', 'Z'};
    
    for (size_t i = 0; i < sizeof(test_chars); i++)
    {
        printf("Stand isdigit('%c'): %d\n", 
               test_chars[i], 
               isdigit(test_chars[i]));
        printf("ft_isdigit('%c'): %d\n", 
               test_chars[i], 
               ft_isdigit(test_chars[i]));      
    }
    
    return 0;
}
*/