#include <unistd.h>
#include "libft.h"

int main() {
    const char *str = "Hello, World!";
    ft_putendl_fd(str, 1);  // Prints to stdout with a newline
    return 0;
}
