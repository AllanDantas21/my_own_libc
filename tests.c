# include "incs/my_libc.h"
# include <stdio.h>
# include <string.h>

void test_my_memcmp() {
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    char str3[] = "Hello, world!";
    char str4[] = "Hello";

    // Test 1: Identical strings
    if (my_memcmp(str1, str2, strlen(str1)) == 0) {
        printf("Test 1 passed\n");
    } else {
        printf("Test 1 failed\n");
    }

    // Test 2: Different strings (case-sensitive)
    if (my_memcmp(str1, str3, strlen(str1)) != 0) {
        printf("Test 2 passed\n");
    } else {
        printf("Test 2 failed\n");
    }

    // Test 3: Different lengths
    if (my_memcmp(str1, str4, strlen(str4)) != 0) {
        printf("Test 3 passed\n");
    } else {
        printf("Test 3 failed\n");
    }

    // Test 4: Zero length comparison
    if (my_memcmp(str1, str2, 0) == 0) {
        printf("Test 4 passed\n");
    } else {
        printf("Test 4 failed\n");
    }
}

int main() {
    test_my_memcmp();
    return 0;
}