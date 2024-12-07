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
// Prototypes for additional functions to be tested
char* my_strcat(char *dest, const char *src);
char* my_strncat(char *dest, const char *src, size_t n);
char* my_strdup(const char *str);

// Tests for my_strcat
void test_my_strcat_should_ConcatenateStringsCorrectly(void) {
    char dest[20] = "Hello";
    TEST_ASSERT_EQUAL_STRING("Hello World", my_strcat(dest, " World"));
}

void test_my_strcat_should_HandleEmptySourceString(void) {
    char dest[20] = "Hello";
    TEST_ASSERT_EQUAL_STRING("Hello", my_strcat(dest, ""));
}

// Tests for my_strncat
void test_my_strncat_should_ConcatenateNCharactersCorrectly(void) {
    char dest[20] = "Hello";
    TEST_ASSERT_EQUAL_STRING("Hello Wo", my_strncat(dest, " World", 3));
}

void test_my_strncat_should_HandleEmptySourceString(void) {
    char dest[20] = "Hello";
    TEST_ASSERT_EQUAL_STRING("Hello", my_strncat(dest, "", 3));
}

// Tests for my_strdup
void test_my_strdup_should_DuplicateStringCorrectly(void) {
    char *dup = my_strdup("Hello");
    TEST_ASSERT_EQUAL_STRING("Hello", dup);
    free(dup);
}

void test_my_strdup_should_HandleEmptyString(void) {
    char *dup = my_strdup("");
    TEST_ASSERT_EQUAL_STRING("", dup);
    free(dup);
}

void test_my_strdup_should_HandleNullPointerGracefully(void) {
    char *dup = my_strdup(NULL);
    TEST_ASSERT_NULL(dup);
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
    RUN_TEST(test_my_strcat_should_ConcatenateStringsCorrectly);
    RUN_TEST(test_my_strcat_should_HandleEmptySourceString);
    RUN_TEST(test_my_strncat_should_ConcatenateNCharactersCorrectly);
    RUN_TEST(test_my_strncat_should_HandleEmptySourceString);
    RUN_TEST(test_my_strdup_should_DuplicateStringCorrectly);
    RUN_TEST(test_my_strdup_should_HandleEmptyString);
    RUN_TEST(test_my_strdup_should_HandleNullPointerGracefully);
    return UNITY_END();
}