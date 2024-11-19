#include "unity.h"

// Prototype for the function to be tested
size_t my_strlen(const char *str);

void setUp(void) {
    // Set up code, if needed
}

void tearDown(void) {
    // Tear down code, if needed
}

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

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_my_strlen_should_ReturnZeroForEmptyString);
    RUN_TEST(test_my_strlen_should_ReturnCorrectLengthForNonEmptyString);
    RUN_TEST(test_my_strlen_should_HandleNullPointerGracefully);
    return UNITY_END();
}