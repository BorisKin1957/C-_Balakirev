/* Напишите программу в которой на двумерное игровое поле размерностью 10 x 10
случайным образом размещаются 12 "мин" так, чтобы они не соприкасались друг с
другом (вокруг клетки с миной не должно быть других мин). Игровое поле должно
быть представлено двумерным массивом с именем pg, типом char и размерностью 10
х 10. Пустые клетки (без мин) должны принимать значение 0, а клетки с минами
помечаются символом '*'.

P. S. В консоль ничего выводить не нужно.
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10
#define MINES 12
// здесь продолжайте программу
#define MAX_ATTEMPTS 1000

// Проверяет, можно ли разместить мину в ячейке (r, c)
int is_valid(char pg[SIZE][SIZE], int r, int c) {
    for (int dr = -1; dr <= 1; dr++) {
        for (int dc = -1; dc <= 1; dc++) {
            if (dr == 0 && dc == 0)
                continue; // Пропускаем саму ячейку
            int nr = r + dr;
            int nc = c + dc;
            if (nr >= 0 && nr < SIZE && nc >= 0 && nc < SIZE) {
                if (pg[nr][nc] != '0')
                    return 0; // Обнаружена соседняя мина
            }
        }
    }
    return 1;
}

int main() {
    char pg[SIZE][SIZE]; // Игровое поле

    // Инициализация поля
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            pg[i][j] = '0';
        }
    }

    srand((unsigned int)time(NULL)); // Инициализация генератора случайных чисел
    int placed = 0;   // Счетчик размещённых мин
    int attempts = 0; // Счетчик попыток

    // Попытки размещения мин
    while (placed < MINES && attempts < MAX_ATTEMPTS) {
        int r = rand() % SIZE;
        int c = rand() % SIZE;

        if (pg[r][c] == '0' && is_valid(pg, r, c)) {
            pg[r][c] = '*'; // Размещение мины
            placed++;
            attempts = 0; // Сброс счетчика попыток
        } else {
            attempts++; // Увеличение счетчика неудачных попыток
        }
    }

    // Вывод результата
    if (placed < MINES) {
        printf("⚠️ Не удалось разместить все %d мин без нарушения правил!\n",
               MINES);
    }

    printf("\nИгровое поле (10x10):\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", pg[i][j]);
        }
        printf("\n");
    }
    //__assert_verify_pg(pg);
    return 0;
}