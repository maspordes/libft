#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    unsigned char *d;
    const unsigned char *s;

    d = (unsigned char *)dst;
    s = (const unsigned char *)src;

    if (d == s || len == 0)
        return d; // No need to move if the pointers are the same or length is zero

    if (d < s) {
        // Non-overlapping case: copy from start to end
        while (len--)
            *d++ = *s++;
    } else {
        // Overlapping case: copy from end to start
        d += len;  // Move d pointer to the end
        s += len;  // Move s pointer to the end
        while (len--) {
            *(--d) = *(--s);
        }
    }

    return dst;
}
/*
#include <stdio.h>
#include <string.h>
#include "libft.h"
#include <stdio.h>
#include <string.h>
#include "libft.h"

void print_results(const char *description, const char *original, const char *result) {
    printf("=== %s ===\n", description);
    printf("Original: %s\n", original);
    printf("Result:   %s\n", result);
    printf("\n");
}

int main() {
    // Non-overlapping test
    char str1_non_overlap[50] = "Hello, World!";
    ft_memmove(str1_non_overlap + 7, str1_non_overlap, 6); // Move "Hello," to after "World!"
    print_results("Non-Overlapping Test", "Hello, World!", str1_non_overlap);

    // Reset str1
    strcpy(str1_non_overlap, "Hello, World!");

    // Overlapping test
    char str1_overlap[50] = "Hello, World!";
    ft_memmove(str1_overlap + 5, str1_overlap, 7); // Overlapping case
    print_results("Overlapping Test", "Hello, World!", str1_overlap);

    // Standard memmove comparison for non-overlapping
    char str2_non_overlap[50] = "Goodbye, World!";
    memmove(str2_non_overlap + 8, str2_non_overlap, 7); // Move "Goodbye" to after "World!"
    print_results("Standard memmove Non-Overlapping", "Goodbye, World!", str2_non_overlap);

    // Standard memmove comparison for overlapping
    char str2_overlap[50] = "Goodbye, World!";
    memmove(str2_overlap + 5, str2_overlap, 7); // Overlapping case
    print_results("Standard memmove Overlapping", "Goodbye, World!", str2_overlap);

    // Edge case: moving within the same buffer
    char str3[50] = "Overlap Testing";
    ft_memmove(str3 + 5, str3, 8); // Move "Overlap " to overlap with "Testing"
    print_results("Edge Case - Self-Overlap", "Overlap Testing", str3);

    // Edge case: moving zero bytes
    char str4[50] = "No Move Here";
    ft_memmove(str4, str4, 0); // Move 0 bytes
    print_results("Edge Case - Zero Length Move", "No Move Here", str4);

    return 0;
}
*/