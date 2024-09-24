#include "libft.h"
#include <stdlib.h>

char    *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char    *new_str;
    size_t  i;

    if (!s || !f)
        return (NULL);
    new_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
    if (!new_str)
        return (NULL);
    i = 0;
    while (s[i])
    {
        new_str[i] = f(i, s[i]);
        i++;
    }
    new_str[i] = '\0';
    return (new_str);
}
/*int main() {
    const char *str = "abc";
    char *result = ft_strmapi(str, example_func);

    printf("ft_strmapi result: %s\n", result);  // Should print transformed string
    free(result);
    return 0;
}*/
