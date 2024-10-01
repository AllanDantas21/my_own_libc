#include "incs/my_libc.h"

#include <stdio.h>
#include <assert.h>
#include <time.h> // Include the time.h library

void test_strncmp() {
    // Test case 1: Equal strings
    assert(my_strncmp("hello", "hello", 5) == 0);

    // Test case 2: First string is less than second string
    assert(my_strncmp("abc", "abd", 3) < 0);

    // Test case 3: First string is greater than second string
    assert(my_strncmp("abd", "abc", 3) > 0);

    // Test case 4: Compare only first n characters
    assert(my_strncmp("abcdef", "abcxyz", 3) == 0);

    // Test case 5: Compare with n greater than string length
    assert(my_strncmp("abc", "abc", 10) == 0);

    printf("All strncmp tests passed!\n");
}

int main() {
    clock_t start, end;
    double cpu_time_used;

    start = clock();
    test_strncmp();
    end = clock();

    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Execution time: %f seconds\n", cpu_time_used);

    return 0;
}