/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:39:56 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 19:40:24 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	int	upper;

	if (c >= 'a' && c <= 'z')
		upper = c - ('a' - 'A');
	else
		upper = c;
	return (upper);
}
/*int main() {
    char lower = 'a';
    char upper = ft_toupper(lower);

    printf("ft_toupper result for '%c': '%c'\n", lower, upper);

    lower = 'A';
    upper = ft_toupper(lower);
    printf("ft_toupper result for '%c': '%c'\n", lower, upper);

    return 0;
}*/
