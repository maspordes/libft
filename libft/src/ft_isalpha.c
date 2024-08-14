#include "libft.h"

int	ft_isalpha(int c)
{
//Check if c is an alphabetical character (a to z or A to Z)
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}