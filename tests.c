# include "incs/my_libc.h"
# include <stdio.h>
# include <string.h>

void test_my_memcpy() {
    char src1[] = "Hello, World!";
    char dest1[50];
    char src2[] = "Test";
    char dest2[50];
    char src3[] = "Another test";
    char dest3[50];

    // Test 1: Basic copy
    my_memcpy(dest1, src1, strlen(src1) + 1);
    if (strcmp(dest1, src1) == 0) {
        printf("Test 1 passed\n");
    } else {
        printf("Test 1 failed\n");
    }

    // Test 2: Copy with different length
    my_memcpy(dest2, src2, strlen(src2) + 1);
    if (strcmp(dest2, src2) == 0) {
        printf("Test 2 passed\n");
    } else {
        printf("Test 2 failed\n");
    }

    // Test 3: Copy into an empty destination
    my_memcpy(dest3, src3, strlen(src3) + 1);
    if (strcmp(dest3, src3) == 0) {
        printf("Test 3 passed\n");
    } else {
        printf("Test 3 failed\n");
    }

    // Test 4: Zero length copy
    my_memcpy(dest1, src1, 0);
    if (strcmp(dest1, src1) == 0) {
        printf("Test 4 passed\n");
    } else {
        printf("Test 4 failed\n");
    }
}

int main() {
    test_my_memcpy();
    return 0;
}