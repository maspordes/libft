/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:14:24 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 17:37:11 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isdigit(c) || ft_isalpha(c))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>

int main(void)
{
    char test_chars[] = {'a', 'Z', '1', '!', ' ', '9', 'g', 'B'};
    for (size_t i = 0; i < sizeof(test_chars); i++)
    {
        printf("ft_isalnum('%c'): %d\n", test_chars[i],
         ft_isalnum(test_chars[i]));
    }
    return (0);
}
*/