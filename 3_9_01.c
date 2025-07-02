/*В программу ниже добавьте директивы условной компиляции так, чтобы при наличии 
макроимени PERIMETR_CALC вычислялся и выводился периметр, а при отсутствии макроимени 
PERIMETR_CALC вычислялась и выводилась площадь.

P.S. Существующие в программе операторы не удалять.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.9.3
*/

#include <stdio.h>

#define PERIMETR_CALC

int main(void) {
    int a, b;
    if (scanf("%d, %d", &a, &b) != 2) {
        printf("Input error.");
        return 0;
    }
    
#ifdef PERIMETR_CALC
    int res = 2 * (a + b);
    printf("%d", res);
#else
    int res = a * b;
    printf("%d", res);
#endif

    return 0;
}