#include <stdio.h>

int main(void)
{
    unsigned char c;
    unsigned int a, b;
    scanf("%u %u", &a, &b);

    if (a <= 0xff) c = (unsigned char)a;
        else {
            printf("Ошибка: a > 255\n");
            return 0;
            }
    if (b > 0xff){
            printf("Ошибка: b > 255\n");
            return 0;
            }

    printf("a = %u, b = %u\n", c, b);
    return 0;

}

/*
Всегда выводит ПЕРВУЮ переменную равной нулю! Т.е. a = 0;
Как только char меняю на int всё работает правильно.
Ввел новую переменную c, которая принимает значение a, 
и далее исполняеет роль переменной char.

*/