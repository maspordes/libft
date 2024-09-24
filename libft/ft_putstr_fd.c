#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
    if (s)
        while (*s)
            write(fd, s++, 1);
}
/*
int main() {
    const char *str = "Hello, World!";
    ft_putstr_fd(str, 1);  // Prints to stdout
    write(1, "\n", 1);      // New line for clarity
    return 0;
}
*/