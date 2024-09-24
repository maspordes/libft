#include "libft.h"
#include <stddef.h>

char *ft_strrchr(const char *s, int c)
{
    const char *last_occurrence = NULL;

    while (*s)
    {
        if (*s == (char)c)
            last_occurrence = s;
        s++;
    }
    if (c == '\0')
        return ((char *)s);
    return ((char *)last_occurrence);
}
/*int main() {
    const char *str = "Hello, World!";
    char *result1 = strrchr(str, 'o');
    char *result2 = ft_strrchr(str, 'o');

    printf("Standard strrchr result: %s\n", result1);  // Should print "o, World!"
    printf("ft_strrchr result: %s\n", result2);  // Should print "o, World!"
    
    return 0;
}*/
