#include <stdio.h>
#include <string.h>

char get_morze_recode(char *); // прототип функции

int main(void) {
    char str[100] = {0};
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    // здесь продолжайте функцию main

    char tmp[5] = {0}; // временный массив для хранения кода одного символа
    char *ptr = str;   // указатель на начало строки
    char result[100] = {0}; // строка для вывода результата
                            // перебираем строку
    for (size_t i = 0; i < 100; i++) {
        sscanf(ptr, "%s", tmp); // Считываем код символа в tmp
        result[i] = get_morze_recode(tmp); // получаем символ по коду
        if (strchr(ptr, ' ') == NULL)
            break;
        ptr = strchr(ptr, ' '); // находим следующий пробел
        ptr++; // переходим к следующему символу кода
    }

    puts(result); // выводим строку

    return 0;
}
// функция для получения символа по коду Морзе
char get_morze_recode(char *string) {
    char symbols[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789 "; // массив символов
    char *morse[] = {
        // массив кодов
        ".-",   // A
        "-...", // B
        "-.-.", // C
        "-..",  // D
        ".",    // E
        "..-.", // F
        "--.",  // G
        "....", // H
        "..",   // I
        ".---", // J
        "-.-",  // K
        ".-..", // L
        "--",   // M
        "-.",   // N
        "---",  // O
        ".--.", // P
        "--.-", // Q
        ".-.",  // R
        "...",  // S
        "-",    // T
        "..-",  // U
        "...-", // V
        ".--",  // W
        "-..-", // X
        "-.--", // Y
        "--..", // Z

        "-----", // 0
        ".----", // 1
        "..---", // 2
        "...--", // 3
        "....-", // 4
        ".....", // 5
        "-....", // 6
        "--...", // 7
        "---..", // 8
        "----.", // 9

        "-...-" // пробел
    };
    // перебираем массив символов symbols
    for (size_t i = 0; i < strlen(symbols); i++) {
        // если код символа есть в массиве morse
        if (strcmp(string, morse[i]) == 0)
            return symbols[i]; // возвращаем символ
    }
}