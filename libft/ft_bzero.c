/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:14:03 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 17:30:16 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

void	ft_bzero(void *s, size_t len)
{
	unsigned char	*ptr;

	ptr = s;
	while (len--)
		*ptr++ = 0;
}

/*#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello, 42!";

	ft_bzero(str, 6);
	printf("After ft_bzero: \"%s\"\n", str);
	return (0);
}
*/