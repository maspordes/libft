#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;
    size_t dst_len;
    size_t src_len;

    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);

    if (dstsize <= dst_len)
        return (dstsize + src_len);

    i = dst_len;
    j = 0;

    while (src[j] != '\0' && (i + 1) < dstsize)
    {
        dst[i] = src[j];
        i++;
        j++;
    }
    dst[i] = '\0';

    return (dst_len + src_len);
}

#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
    char dest[50] = "Hello, ";
    const char *src = "World!";
    size_t size = sizeof(dest);

    printf("Before ft_strlcat: %s\n", dest);
    size_t result = ft_strlcat(dest, src, size);
    printf("After ft_strlcat: %s\n", dest);  // Expected: "Hello, World!"
    printf("Total length: %zu\n", result);    // Expected: length of "Hello, World!" (13)

    return 0;
}
