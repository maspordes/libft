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