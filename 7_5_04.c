/* Вывести все слова из входной строки "Radio Dennis Ritchie Ken", вывести
 * количество слов и завершить работу программы */

#include <stdio.h>
#include <string.h>

typedef int (*FUNC_CORRECT)(const char*);
int is_correct(const char*);
int get_correct_words(const char (*words)[50], int count_words, FUNC_CORRECT filter);


int main(void) {
    char line[50 * 20]; // Максимальная длина строки
    char word[51]; // Максимальная длина слова
    size_t count = 0;
    
    // Читаем только одну строку
    if (fgets(line, sizeof(line), stdin) != NULL) {
        // Используем sscanf для чтения из строки
        const char *ptr = line;
        int chars_read;

        
        while (sscanf(ptr, "%50s%n", word, &chars_read) == 1) {
            printf("%s\n", word);
            //count++;
            ptr += chars_read;
        }
    }
    
    printf("%zu\n", count);
    return 0;
}