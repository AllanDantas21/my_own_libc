/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_atoi_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aldantas <aldantas@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/15 22:16:15 by aldantas          #+#    #+#             */
/*   Updated: 2024/12/15 22:18:02 by aldantas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../unity.h"

// Tests for my_atoi
void test_my_atoi_should_ConvertPositiveNumber(void) {
    TEST_ASSERT_EQUAL(42, my_atoi("42"));
}

void test_my_atoi_should_ConvertNegativeNumber(void) {
    TEST_ASSERT_EQUAL(-42, my_atoi("-42"));
}

void test_my_atoi_should_HandleLeadingWhitespace(void) {
    TEST_ASSERT_EQUAL(42, my_atoi(" 42"));
}

void test_my_atoi_should_HandleTrailingWhitespace(void) {
    TEST_ASSERT_EQUAL(42, my_atoi("42 "));
}

void test_my_atoi_should_HandleLeadingAndTrailingWhitespace(void) {
    TEST_ASSERT_EQUAL(42, my_atoi(" 42 "));
}

void test_my_atoi_should_HandleNonNumericInput(void) {
    TEST_ASSERT_EQUAL(0, my_atoi("Hello, World!"));
}

void test_my_atoi_should_HandleEmptyString(void) {
    TEST_ASSERT_EQUAL(0, my_atoi(""));
}

void test_my_atoi_should_HandleNullPointerGracefully(void) {
    TEST_ASSERT_EQUAL(0, my_atoi(NULL));
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_my_atoi_should_ConvertPositiveNumber);
    RUN_TEST(test_my_atoi_should_ConvertNegativeNumber);
    RUN_TEST(test_my_atoi_should_HandleLeadingWhitespace);
    RUN_TEST(test_my_atoi_should_HandleTrailingWhitespace);
    RUN_TEST(test_my_atoi_should_HandleLeadingAndTrailingWhitespace);
    RUN_TEST(test_my_atoi_should_HandleNonNumericInput);
    RUN_TEST(test_my_atoi_should_HandleEmptyString);
    RUN_TEST(test_my_atoi_should_HandleNullPointerGracefully);
    return UNITY_END();
}