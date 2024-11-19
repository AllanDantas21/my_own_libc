#include "unity.h"

// Prototypes for the functions to be tested
size_t my_strlen(const char *str);
char* my_strcpy(char *dest, const char *src);
int my_strcmp(const char *str1, const char *str2);

void setUp(void) {
    // Set up code, if needed
}

void tearDown(void) {
    // Tear down code, if needed
}

// Tests for my_strlen
void test_my_strlen_should_ReturnZeroForEmptyString(void) {
    TEST_ASSERT_EQUAL(0, my_strlen(""));
}

void test_my_strlen_should_ReturnCorrectLengthForNonEmptyString(void) {
    TEST_ASSERT_EQUAL(5, my_strlen("Hello"));
    TEST_ASSERT_EQUAL(11, my_strlen("Hello World"));
}

void test_my_strlen_should_HandleNullPointerGracefully(void) {
    TEST_ASSERT_EQUAL(0, my_strlen(NULL));
}

// Tests for my_strcpy
void test_my_strcpy_should_CopyStringCorrectly(void) {
    char dest[20];
    TEST_ASSERT_EQUAL_STRING("Hello", my_strcpy(dest, "Hello"));
    TEST_ASSERT_EQUAL_STRING("World", my_strcpy(dest, "World"));
}

void test_my_strcpy_should_HandleEmptySourceString(void) {
    char dest[20];
    TEST_ASSERT_EQUAL_STRING("", my_strcpy(dest, ""));
}

// Tests for my_strcmp
void test_my_strcmp_should_ReturnZeroForEqualStrings(void) {
    TEST_ASSERT_EQUAL(0, my_strcmp("Hello", "Hello"));
}

void test_my_strcmp_should_ReturnNonZeroForDifferentStrings(void) {
    TEST_ASSERT_NOT_EQUAL(0, my_strcmp("Hello", "World"));
    TEST_ASSERT_NOT_EQUAL(0, my_strcmp("Hello", "Hello World"));
}

void test_my_strcmp_should_HandleEmptyStrings(void) {
    TEST_ASSERT_EQUAL(0, my_strcmp("", ""));
    TEST_ASSERT_NOT_EQUAL(0, my_strcmp("Hello", ""));
    TEST_ASSERT_NOT_EQUAL(0, my_strcmp("", "Hello"));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_my_strlen_should_ReturnZeroForEmptyString);
    RUN_TEST(test_my_strlen_should_ReturnCorrectLengthForNonEmptyString);
    RUN_TEST(test_my_strlen_should_HandleNullPointerGracefully);
    RUN_TEST(test_my_strcpy_should_CopyStringCorrectly);
    RUN_TEST(test_my_strcpy_should_HandleEmptySourceString);
    RUN_TEST(test_my_strcmp_should_ReturnZeroForEqualStrings);
    RUN_TEST(test_my_strcmp_should_ReturnNonZeroForDifferentStrings);
    RUN_TEST(test_my_strcmp_should_HandleEmptyStrings);
    return UNITY_END();
}