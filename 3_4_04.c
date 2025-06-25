#include <stdio.h>
/*Напишите программу чтения целого положительного четырехзначного числа из входного потока. 
Необходимо выполнить проверку, что оно начинается на цифру 3. Если это так, то в консоль 
вывести строку "yes", иначе - строку "no".

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/3.4.7

Sample Input:

3462
Sample Output:

yes*/

int main(void)
{
    
    int number;
    scanf("%d", &number);

    number / 1000 == 3 ? 
        printf("yes") : 
        printf("no");

    return 0;
}