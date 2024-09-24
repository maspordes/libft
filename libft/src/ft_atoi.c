/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 12:01:44 by marrey            #+#    #+#             */
/*   Updated: 2024/09/24 12:02:02 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"

int ft_atoi(const char *str)
{
    int i;
    int sign;
    unsigned int result;

    i = 0;
    sign = 1;
    result = 0;

    // Skip whitespace
    while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
        i++;

    // Handle sign
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            sign = -1;
        i++;
    }

    // Convert the digits
    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++;
    }

    // Handle overflow for the case of 2147483648 (when sign is negative)
    if (result > 2147483648 && sign == -1)
        return (0);
    // Handle overflow for the case of 2147483647 (when sign is positive)
    if (result > 2147483647 && sign == 1)
        return (-1);

    return (result * sign);
}

//#include "libft.h"
#include <stdio.h>    // For printf
#include <stdlib.h>   // For atoi

int main(void) {
    char *str1 = "1234";
    char *str2 = "   -42";
    char *str3 = "0";
    char *str4 = "999999999999999";
    char *str5 = "abc123";
    
    // Test your ft_atoi function with multiple inputs
    printf("My ft_atoi with '1234': %d\n", ft_atoi(str1));
    printf("Standard atoi with '1234': %d\n", atoi(str1));

    printf("My ft_atoi with '   -42': %d\n", ft_atoi(str2));
    printf("Standard atoi with '   -42': %d\n", atoi(str2));

    printf("My ft_atoi with '0': %d\n", ft_atoi(str3));
    printf("Standard atoi with '0': %d\n", atoi(str3));

    printf("My ft_atoi with '999999999999999': %d\n", ft_atoi(str4));
    printf("Standard atoi with '999999999999999': %d\n", atoi(str4));

    printf("My ft_atoi with 'abc123': %d\n", ft_atoi(str5));
    printf("Standard atoi with 'abc123': %d\n", atoi(str5));

    return 0;
}
