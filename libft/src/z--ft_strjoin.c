#include "libft.h"
char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *joined;
    size_t  len;

    if (!s1 || !s2)
        return (NULL);
    len = ft_strlen(s1) + ft_strlen(s2);
    joined = (char *)malloc(sizeof(char) * (len + 1));
    if (!joined)
        return (NULL);
    ft_strlcpy(joined, s1, ft_strlen(s1) + 1);
    ft_strlcat(joined, s2, len + 1);
    return (joined);
}

