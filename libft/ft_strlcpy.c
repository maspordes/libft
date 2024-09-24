#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	count;
	size_t	i;

	count = ft_strlen(src);
	i = 0;
	if (size != 0)
	{
		while (i < (size - 1) && src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return (count);
}
/*int main() {
    char dest1[20];
    char dest2[20];
    const char *src = "Hello, World!";

    printf("ft_strlcpy result: %zu\n", ft_strlcpy(dest1, src, sizeof(dest1)));
    printf("After ft_strlcpy: %s\n", dest1);  // Should print "Hello, World!"

    printf("Standard strlcpy result: %zu\n", strlcpy(dest2, src, sizeof(dest2)));
    printf("After strlcpy: %s\n", dest2);  // Should also print "Hello, World!"
    
    return 0;
}*/