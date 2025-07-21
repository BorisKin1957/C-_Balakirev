/* Продолжите программу, в которой объявляется массив text из трех указателей,
проиницализированные на строковые литералы:

1-й указатель: "language C"
2-й указатель: "language C++"
3-й указатель: "language Python"

P. S. В консоль ничего выводить не нужно.
 */

#include <stdio.h>

int main(void) {
    // здесь продолжайте программу
    char *str1 = "language C";
    char *str2 = "language C++";
    char *str3 = "language Python";
    char *text[] = {str1, str2, str3};

    // __ASSERT_TESTS__ // макроопределение для тестирования (не убирать и
    // должно идти непосредственно перед return 0)
    return 0;
}