/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:09:15 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 19:31:59 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	if (s == NULL || f == NULL)
		return ;
	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*
#include <stdio.h>
#include "libft.h"

// Sample function to modify the character
void	change_char(unsigned int index, char *c)
{
	*c = *c + index; // Increment the character by its index value
}

int	main(void)
{
	char str[] = "abcdef";

	printf("Before ft_striteri: %s\n", str);
	ft_striteri(str, change_char);
	printf("After ft_striteri: %s\n", str); // Expected: "acegik"

	return 0;
}
*/