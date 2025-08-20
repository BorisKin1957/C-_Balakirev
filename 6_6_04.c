/* Объявите функцию с именем strip_str, которая имеет следующие параметры
(порядок важен):

указатель на обрабатываемую корректную Си-строку;
указатель на строку с удаляемыми символами.
Функция strip_str должна из переданной ей строки удалить все символы, указанные
в последнем параметре (строке с удаляемыми символами). Например, если указана
строка "!? &@", то все эти символы, где бы они в строке ни находились и в каком
бы порядке ни шли, следует удалить.

В функции main вызовите функцию strip_str для строки str и укажите удалить из
нее символы ".,-!?". Выведите полученную строку в консоль.

Тесты: https://github.com/selfedu-rus/c-tests/tree/main/6.6.6

Sample Input:

Hello, World!
Sample Output:

Hello World
 */

#include <stdio.h>
#include <string.h>

void strip_str(char *, char *); // прототип функции

int main(void) {
    char str[100] = {0}, str2[20];
    fgets(str, sizeof(str) - 1, stdin);
    char *ptr_n = strrchr(str, '\n');
    if (ptr_n != NULL)
        *ptr_n = '\0';

    // здесь продолжайте функцию main
    strip_str(str, ".,-!?"); // вызываем функцию
    puts(str);               // выводим полученную строку

    return 0;
}
//Удаляет из строки str все символы, указанные в строке symbols
void strip_str(char *string, char *symbols) {
    size_t len = strlen(string), count = 0; // длина строки и счетчик удаленных символов

    for (size_t i = 0, j = 0; i < len; i++) {
        if (strchr(symbols, string[i]) == NULL) { // если символ не найден в строке symbols
            string[j] = string[i]; // оставляем
            j++;
        } else // если символ найден
            count++; // увеличиваем счетчик
    }
    for (size_t i = 0; i < count; i++) { // count раз удаляем лишние символы с конца строки
        string[len - i - 1] = '\0'; // заменяя их на ноль
    }
}