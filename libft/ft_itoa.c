/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:58:12 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 20:16:15 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	get_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static void	fill_string(char *str, long num, int len)
{
	int	i;

	i = len - 1;
	while (num > 0)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	long	num;

	num = n;
	len = get_len(num);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num < 0)
	{
		str[0] = '-';
		num = -num;
	}
	else if (n == 0)
	{
		str[0] = '0';
		return (str);
	}
	fill_string(str, num, len);
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
