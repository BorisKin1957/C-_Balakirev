#include <stdio.h>
/*Продолжите программу. В функции show_menu() необходимо выполнить считывание 
символа в переменную menu_item из входного потока. После этого прописать оператор 
switch, который возвращает порядковый номер выбранного пункта меню в соответствии 
с введенным символом: a -> 1; b -> 2; c -> 3; d -> 4. (Могут быть введены и заглавные 
символы: A, B, C, D.) Возврат значения в операторе switch выполнить с помощью оператора 
return. Если ни одно из условий не срабатывает, то возвращается -1 (это уже есть 
в функции программы).

В функции main() вывести в консоль значение переменной item в виде одного целого 
числа на следующей строчке после пунктов меню.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.4.5

Sample Input:

d
Sample Output:

a) learning english
b) learning C/C++
c) learning mathematic
d) learning Python
4*/

int show_menu(void)
{
    char menu_item;

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
            return 1;
        case 'b':
        case 'B':
            return 2;
        case 'c':
        case 'C':
            return 3;
        case 'd':
        case 'D':
            return 4;
        default:
            return -1;
    }

}

int main(void)
{
    int item = show_menu();

    printf("%d\n", item);

    return 0;
}