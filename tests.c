# include "incs/my_libc.h"

# include <stdio.h>

int main() {
    char buffer[10] = "abcdefghi";
    
    printf("Before bzero: %s\n", buffer);
    my_bzero(buffer, 10);
    printf("After bzero: %s\n", buffer);

    return 0;
}