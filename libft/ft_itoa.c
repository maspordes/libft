/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:58:12 by marrey            #+#    #+#             */
/*   Updated: 2024/09/24 13:58:13 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdlib.h> // Include this for malloc and free

static int	ft_numlen(int n)
{
	int	len;

	len = (n <= 0) ? 1 : 0;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	num = n;
	len = ft_numlen(n);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (str);
}
/*
#include <stdio.h>
#include "libft.h"

int main(void)
{
    int numbers[] = {0, 42, -42, 2147483647, -2147483648};
    int i;

    for (i = 0; i < 5; i++)
    {
        char *result = ft_itoa(numbers[i]);
        printf("ft_itoa(%d) = %s\n", numbers[i], result);
        free(result); // Don't forget to free the allocated memory!
    }

    return 0;
}
*/