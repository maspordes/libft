#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
	unsigned char *ptr = b;

	while (len--)
	{
		*ptr = (unsigned char)c;
		ptr++;
	}
	return b;
}
/*int main(void) {
    char str[50] = "Hello, world!";
    printf("Before ft_memset: %s\n", str);

    // Using ft_memset to replace all characters with 'x' for the first 5 bytes
    ft_memset(str, 'x', 5);
    printf("After ft_memset: %s\n", str);  // Expected output: xxxxx, world!

    return 0;
}*/