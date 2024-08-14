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