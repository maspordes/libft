/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marrey <marrey@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:05:50 by marrey            #+#    #+#             */
/*   Updated: 2024/09/25 15:05:52 by marrey           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

static void	ft_putnbr_helper(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n >= 10)
		ft_putnbr_helper(n / 10, fd);
	ft_putchar_fd(n % 10 + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	ft_putnbr_helper(n, fd);
}
/*
#include <stdio.h>
#include <unistd.h>
#include "libft.h"

int	main(void)
{
	ft_putnbr_fd(42, 1); // Expected output: "42"
	write(1, "\n", 1);
	ft_putnbr_fd(-42, 1); // Expected output: "-42"
	write(1, "\n", 1);
	ft_putnbr_fd(0, 1); // Expected output: "0"
	write(1, "\n", 1);
	ft_putnbr_fd(-2147483648, 1); // Expected output: "-2147483648"
	write(1, "\n", 1);
	ft_putnbr_fd(2147483647, 1); // Expected output: "2147483647"
	write(1, "\n", 1);

	return (0);
}
*/
