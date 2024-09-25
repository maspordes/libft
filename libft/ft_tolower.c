/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 19:39:30 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 19:39:33 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	int	lower;

	if (c >= 'A' && c <= 'Z')
		lower = c + ('a' - 'A');
	else
		lower = c;
	return (lower);
}
/*int main() {
    char c = 'A';
    printf("Standard tolower('%c'): %c\n", c, tolower(c));  // Should print 'a'
    printf("ft_tolower('%c'): %c\n", c, ft_tolower(c));  // Should print 'a'
    
    return 0;
}*/
