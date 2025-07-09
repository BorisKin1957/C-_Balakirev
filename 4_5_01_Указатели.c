/* Допишите программу. Необходимо объявить указатель с именем ptr_var_d для работы с 
переменной var_d. Через указатель ptr_var_d изменить значение переменной var_d на -54.38.

P. S. В консоль ничего выводить не нужно.
 */

#include <stdio.h>

int main(void)
{
    double var_d = 0;

    // здесь продолжайте программу
    double *ptr_var_d = &var_d;
    // ptr_var_d = &var_d;
    *ptr_var_d = -54.38;

    printf("var_d = %.2f\n", var_d);

    // __ASSERT_TESTS__ // макроопределение для тестирования
    
    return 0;
}