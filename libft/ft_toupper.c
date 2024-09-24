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

    printf("ft_toupper result for '%c': '%c'\n", lower, upper);  // Should print 'A'

    lower = 'A';
    upper = ft_toupper(lower);
    printf("ft_toupper result for '%c': '%c'\n", lower, upper);  // Should print 'A' (no change)

    return 0;
}*/