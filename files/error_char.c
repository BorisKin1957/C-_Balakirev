#include <stdio.h>

int main(void)
{
    unsigned char c, b;
    unsigned int a;
    scanf("%u %hhu", &a, &b);

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
Мой VSCode по не понятной, пока, мне причине всегда вводит ПЕРВУЮ из двух 
и более вводимых в тип char / unsigned char переменных равной нулю! Так, в моем коде переменная с 
станет равной 0;
Как только тип char меняю на int всё работает правильно.
Поэтому, ввел дополнительную переменную a типа int, которая принимает вводимое числовое значение 
без искажения, а затем отправляю это число в переменную c типа unsigned char.
В итоге имею две перменные: c и b типа unsigned char.

*/