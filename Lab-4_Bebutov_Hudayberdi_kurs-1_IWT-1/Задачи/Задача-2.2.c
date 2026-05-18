#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main() {
    char input_line[200];
    char int_str[100];
    char double_str[100];
    char *int_end;
    char *double_end;
    long int_val;
    double double_val;
    int space_pos;
    
    printf("Введите целое и вещественное число через пробел: ");
    fgets(input_line, sizeof(input_line), stdin);
    
    input_line[strcspn(input_line, "\n")] = '\0';
    
    for (space_pos = 0; space_pos < (int)strlen(input_line); space_pos++) {
        if (input_line[space_pos] == ' ') {
            break;
        }
    }
    
    if (space_pos == (int)strlen(input_line)) {
        printf("Ошибка: не найден пробел между числами\n");
        return 1;
    }
    
    strncpy(int_str, input_line, space_pos);
    int_str[space_pos] = '\0';
    
    strcpy(double_str, input_line + space_pos + 1);
    
    errno = 0;
    int_val = strtol(int_str, &int_end, 10);
    
    if (int_end == int_str) {
        printf("Ошибка целого числа: цифры не найдены\n");
    } else if (errno == ERANGE) {
        printf("Ошибка целого числа: выход за диапазон\n");
    } else if (*int_end != '\0') {
        printf("Ошибка целого числа: лишние символы после числа\n");
    } else {
        printf("Целое число: %ld\n", int_val);
    }
    
    errno = 0;
    double_val = strtod(double_str, &double_end);
    
    if (double_end == double_str) {
        printf("Ошибка вещественного числа: цифры не найдены\n");
    } else if (errno == ERANGE) {
        printf("Ошибка вещественного числа: выход за диапазон\n");
    } else if (*double_end != '\0') {
        printf("Ошибка вещественного числа: лишние символы после числа\n");
    } else {
        printf("Вещественное число: %f\n", double_val);
    }
    
    return 0;
}
