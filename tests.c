#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

// Helper function to print test results
void print_test_result(const char *test_name, int passed) {
    printf("%s: %s\n", test_name, passed ? "PASS" : "FAIL");
}

// Test ft_substr
void test_ft_substr(void) {
    char *result;

    // Test 1: Normal case
    result = ft_substr("Hello, World!", 7, 5);
    print_test_result("ft_substr normal", result && strcmp(result, "World") == 0);
    free(result);

    // Test 2: Start index beyond string length
    result = ft_substr("Hello", 10, 3);
    print_test_result("ft_substr start beyond", result && strcmp(result, "") == 0);
    free(result);

    // Test 3: NULL string
    result = ft_substr(NULL, 0, 5);
    print_test_result("ft_substr NULL string", result == NULL);

    // Test 4: Zero length
    result = ft_substr("Hello", 2, 0);
    print_test_result("ft_substr zero length", result && strcmp(result, "") == 0);
    free(result);
}

// Test ft_strjoin
void test_ft_strjoin(void) {
    char *result;

    // Test 1: Normal case
    result = ft_strjoin("Hello, ", "World!");
    print_test_result("ft_strjoin normal", result && strcmp(result, "Hello, World!") == 0);
    free(result);

    // Test 2: NULL s1
    result = ft_strjoin(NULL, "World!");
    print_test_result("ft_strjoin NULL s1", result == NULL);

    // Test 3: NULL s2
    result = ft_strjoin("Hello, ", NULL);
    print_test_result("ft_strjoin NULL s2", result == NULL);

    // Test 4: Both NULL
    result = ft_strjoin(NULL, NULL);
    print_test_result("ft_strjoin both NULL", result == NULL);
}

// Test ft_strtrim
void test_ft_strtrim(void) {
    char *result;

    // Test 1: Normal case
    result = ft_strtrim("  Hello, World!  ", " ");
    print_test_result("ft_strtrim normal", result && strcmp(result, "Hello, World!") == 0);
    free(result);

    // Test 2: NULL s1
    result = ft_strtrim(NULL, " ");
    print_test_result("ft_strtrim NULL s1", result == NULL);

    // Test 3: NULL set
    result = ft_strtrim("  Hello, World!  ", NULL);
    print_test_result("ft_strtrim NULL set", result == NULL);

    // Test 4: Both NULL
    result = ft_strtrim(NULL, NULL);
    print_test_result("ft_strtrim both NULL", result == NULL);
}

// Test ft_split
void test_ft_split(void) {
    char **result;

    // Test 1: Normal case
    result = ft_split("Hello,World,Test", ',');
    int passed = result && strcmp(result[0], "Hello") == 0 &&
                 strcmp(result[1], "World") == 0 &&
                 strcmp(result[2], "Test") == 0 &&
                 result[3] == NULL;
    print_test_result("ft_split normal", passed);
    for (int i = 0; result[i]; i++) free(result[i]);
    free(result);

    // Test 2: NULL string
    result = ft_split(NULL, ',');
    print_test_result("ft_split NULL string", result == NULL);
}

// Test ft_itoa
void test_ft_itoa(void) {
    char *result;

    // Test 1: Positive number
    result = ft_itoa(123);
    print_test_result("ft_itoa positive", result && strcmp(result, "123") == 0);
    free(result);

    // Test 2: Negative number
    result = ft_itoa(-123);
    print_test_result("ft_itoa negative", result && strcmp(result, "-123") == 0);
    free(result);

    // Test 3: Zero
    result = ft_itoa(0);
    print_test_result("ft_itoa zero", result && strcmp(result, "0") == 0);
    free(result);
}

// Helper function for ft_strmapi
char test_map_func(unsigned int i, char c) {
    return c + 1;
}

// Test ft_strmapi
void test_ft_strmapi(void) {
    char *result;

    // Test 1: Normal case
    result = ft_strmapi("abcd", test_map_func);
    print_test_result("ft_strmapi normal", result && strcmp(result, "bcde") == 0);
    free(result);

    // Test 2: NULL string
    result = ft_strmapi(NULL, test_map_func);
    print_test_result("ft_strmapi NULL string", result == NULL);

    // Test 3: NULL function
    result = ft_strmapi("abcd", NULL);
    print_test_result("ft_strmapi NULL function", result == NULL);
}

// Helper function for ft_striteri
void test_iter_func(unsigned int i, char *c) {
    *c += 1;
}

// Test ft_striteri
void test_ft_striteri(void) {
    char str[] = "abcd";

    // Test 1: Normal case
    ft_striteri(str, test_iter_func);
    print_test_result("ft_striteri normal", strcmp(str, "bcde") == 0);

    // Test 2: NULL string
    ft_striteri(NULL, test_iter_func);
    print_test_result("ft_striteri NULL string", 1); // Should not crash

    // Test 3: NULL function
    ft_striteri(str, NULL);
    print_test_result("ft_striteri NULL function", 1); // Should not crash
}

// Test ft_putchar_fd
void test_ft_putchar_fd(void) {
    printf("ft_putchar_fd test (visual check): ");
    ft_putchar_fd('A', 1);
    printf("\n");
    print_test_result("ft_putchar_fd normal", 1); // Manual verification
}

// Test ft_putstr_fd
void test_ft_putstr_fd(void) {
    printf("ft_putstr_fd test (visual check): ");
    ft_putstr_fd("Hello", 1);
    printf("\n");
    print_test_result("ft_putstr_fd normal", 1); // Manual verification

    printf("ft_putstr_fd NULL test (visual check): ");
    ft_putstr_fd(NULL, 1);
    printf("\n");
    print_test_result("ft_putstr_fd NULL", 1); // Should not crash
}

// Test ft_putendl_fd
void test_ft_putendl_fd(void) {
    printf("ft_putendl_fd test (visual check): ");
    ft_putendl_fd("Hello", 1);
    print_test_result("ft_putendl_fd normal", 1); // Manual verification

    printf("ft_putendl_fd NULL test (visual check): ");
    ft_putendl_fd(NULL, 1);
    print_test_result("ft_putendl_fd NULL", 1); // Should not crash
}

// Test ft_putnbr_fd
void test_ft_putnbr_fd(void) {
    printf("ft_putnbr_fd test (visual check): ");
    ft_putnbr_fd(-123, 1);
    printf("\n");
    print_test_result("ft_putnbr_fd normal", 1); // Manual verification
}

int main(void) {
    printf("Running libft tests...\n\n");

    test_ft_substr();
    test_ft_strjoin();
    test_ft_strtrim();
    test_ft_split();
    test_ft_itoa();
    test_ft_strmapi();
    test_ft_striteri();
    test_ft_putchar_fd();
    test_ft_putstr_fd();
    test_ft_putendl_fd();
    test_ft_putnbr_fd();

    printf("\nTests completed.\n");
    return 0;
}
