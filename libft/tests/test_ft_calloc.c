#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main() {
    int *arr1 = ft_calloc(5, sizeof(int));
    int *arr2 = calloc(5, sizeof(int));
    
    for (int i = 0; i < 5; i++) {
        printf("ft_calloc arr[%d]: %d\n", i, arr1[i]);  // Should print 0
        printf("Standard calloc arr[%d]: %d\n", i, arr2[i]);  // Should also print 0
    }
    
    free(arr1);
    free(arr2);
    return 0;
}
