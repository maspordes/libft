#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			cc;

	cc = (char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == cc)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == cc)
		return ((char *) &s[i]);
	return (NULL);
}
/*int main() {
    const char *str = "Hello, World!";
    char *result1 = strchr(str, 'W');
    char *result2 = ft_strchr(str, 'W');

    printf("Standard strchr result: %s\n", result1);  // Should print "World!"
    printf("ft_strchr result: %s\n", result2);  // Should print "World!"
    
    return 0;
}*/