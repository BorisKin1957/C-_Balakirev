#include <stdio.h>
/*Продолжите программу. Необходимо записать оператор switch для преобразования малых символов из набора:

a, b, c, d, e, f

в заглавные. Под преобразованием понимается изменение текущего значения переменной symbol 
на соответствующий символ заглавной буквы. После оператора switch выполнить вывод в консоль 
значения переменной symbol в виде символа.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.4.2

Sample Input:

e
Sample Output:

E*/

int main(void)
{
    char symbol;
    if(scanf("%c", &symbol) != 1) {
        printf("Input error.");
        return 0;
    }

 switch (symbol)
 {
  case 'a':
    symbol = 'A';
    break;
  case 'b':
    symbol = 'B';
    break;
  case 'c':
    symbol = 'C';
    break;
  case 'd':
    symbol = 'D';
    break;
  case 'e':
    symbol = 'E';
    break;
  case 'f':
    symbol = 'F';
    break;
  default:
    break;
 }
    printf("%c\n", symbol);

    return 0;
}