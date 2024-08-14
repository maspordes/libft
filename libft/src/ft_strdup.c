#include "libft.h"
#include <stdlib.h>
#include <string.h>

/* Allocates and returns a duplicate of the string 's'. */
char *ft_strdup(const char *s)
{
    char *dup;
    size_t len;

    len = strlen(s);
    dup = (char *)malloc(len + 1);
    if (!dup)
        return (NULL);
    strcpy(dup, s);
    return (dup);
}
