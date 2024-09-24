#include "libft.h"
void ft_putendl_fd(char *s, int fd)
{
    if (s)
    {
        ft_putstr_fd(s, fd);   // Write the string
        write(fd, "\n", 1);    // Write the newline character
    }
}
/*int main() {
    const char *str = "Hello, World!";
    ft_putendl_fd(str, 1);  // Prints to stdout with a newline
    return 0;
}*/