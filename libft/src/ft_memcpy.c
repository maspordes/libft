#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dest;
	unsigned char	*source;

	if (src == NULL && dst == NULL)
		return (dst);
	dest = (unsigned char *)dst;
	source = (unsigned char *)src;
	while (n > 0)
	{
		*(dest++) = *(source++);
		n--;
	}
	return (dst);
}