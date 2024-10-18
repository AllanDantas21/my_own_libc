# include "incs/my_libc.h"
# include <stdio.h>
# include <string.h>

void test_my_memchr() {
    char str[] = "Hello, world!";
    char *result;

    // Test 1: Character is in the string
    result = my_memchr(str, 'w', strlen(str));
    if (result != NULL && *result == 'w') {
        printf("Test 1 passed\n");
    } else {
        printf("Test 1 failed\n");
    }

    // Test 2: Character is not in the string
    result = my_memchr(str, 'z', strlen(str));
    if (result == NULL) {
        printf("Test 2 passed\n");
    } else {
        printf("Test 2 failed\n");
    }

    // Test 3: Character is at the beginning of the string
    result = my_memchr(str, 'H', strlen(str));
    if (result != NULL && *result == 'H') {
        printf("Test 3 passed\n");
    } else {
        printf("Test 3 failed\n");
    }

    // Test 4: Character is at the end of the string
    result = my_memchr(str, '!', strlen(str));
    if (result != NULL && *result == '!') {
        printf("Test 4 passed\n");
    } else {
        printf("Test 4 failed\n");
    }
}

int main() {
    test_my_memchr();
    return 0;
}