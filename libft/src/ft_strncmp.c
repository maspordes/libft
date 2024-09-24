#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((str1[i] || str2[i]) && i < n)
	{
		if ((unsigned char)str1[i] != (unsigned char)str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return (0);
}
/*int main() {
    char str1[] = "Hello";
    char str2[] = "Hello";
    printf("Standard strncmp: %d\n", strncmp(str1, str2, 5));  // Should print 0
    printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, 5));  // Should print 0

    str2[1] = 'a';  // Change one character
    printf("Standard strncmp: %d\n", strncmp(str1, str2, 5));  // Should print non-zero
    printf("ft_strncmp: %d\n", ft_strncmp(str1, str2, 5));  // Should print non-zero

    return 0;
}*/