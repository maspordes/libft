/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:58:12 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 18:01:03 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	ft_numlen(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	ft_fill_str(char *str, int n, int len)
{
	while (n > 0)
	{
		str[--len] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == 0)
	{
		str = (char *)malloc(2);
		if (!str)
			return (NULL);
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	len = ft_numlen(n);
	str = (char *)malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	ft_fill_str(str, n, len);
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