#include "libft.h"
#include <stddef.h>
#include <string.h>

/* Concatenates 'src' to 'dst' with a maximum size 'size'. */
size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t dst_len;
    size_t src_len;
    size_t i;

    dst_len = strlen(dst);
    src_len = strlen(src);
    if (size <= dst_len)
        return (src_len + size);
    i = 0;
    while (src[i] && dst_len + i < size - 1)
    {
        dst[dst_len + i] = src[i];
        i++;
    }
    dst[dst_len + i] = '\0';
    return (dst_len + src_len);
}
