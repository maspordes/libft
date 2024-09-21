#include <unistd.h>
#include "libft.h"

int main() {
    int num = 42;
    ft_putbnr_fd(num, 1);  // Prints binary representation of 42 to stdout
    write(1, "\n", 1);      // New line for clarity
    return 0;
}
