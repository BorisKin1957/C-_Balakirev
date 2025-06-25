#include <stdio.h>
/* Продолжите программу. Необходимо выполнить проверку выбора одного из пунктов меню 
с помощью оператора switch. Если пользователь вводит латинский символ из множества 
{a, b, c, d} или {A, B, C, D}, то соответственно выбирается один из пунктов, остальные 
пропускаются. Обратите внимание, что может быть введена или малая буква или заглавная. 
Оба варианта должны срабатывать. Если выбран один из пунктов меню, то переменной 
menu_number следует присвоить номер выбранного пункта. Номера отсчитываются с единицы, 
то есть, a -> 1; b -> 2; c -> 3; d -> 4. Если ни один из пунктов не выбран, то переменная 
menu_number должна принимать значение -1. В консоль выводятся пункты меню (уже реализовано) 
и на следующей строчке значение переменной menu_number в виде одного целого числа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.4.3

Sample Input:

B
Sample Output:

a) learning english
b) learning C/C++
c) learning mathematic
d) learning Python
2*/

#include <stdio.h>

int main(void)
{
    char menu_item;
    short menu_number = 0;

    printf("a) learning english\n\
b) learning C/C++\n\
c) learning mathematic\n\
d) learning Python\n");

    if(scanf("%c", &menu_item) != 1) {
        printf("Input error.");
        return 0;
    }

    switch (menu_item) {
        case 'a':
        case 'A':
            menu_number = 1;
            break;
        case 'b':
        case 'B':
            menu_number = 2;
            break;
        case 'c':
        case 'C':
            menu_number = 3;
            break;
        case 'd':
        case 'D':
            menu_number = 4;
            break;
        default:
            menu_number = -1;
    }
    printf("%d\n", menu_number);
   // __ASSERT_TESTS__ 
    return 0;
}
