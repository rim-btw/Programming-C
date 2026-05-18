#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MY_SIZE 32

int main() {
    char my_string[MY_SIZE];
    char copy_string[MY_SIZE];
    char dest[MY_SIZE * 2];
    char str1[MY_SIZE] = "Hello";
    char str2[MY_SIZE] = "World";
    char str_a[MY_SIZE] = "apple";
    char str_b[MY_SIZE] = "banana";
    char mixed[MY_SIZE] = "HeLLo WoRLd";
    char lower_str[MY_SIZE];
    char upper_str[MY_SIZE];
    int len1 = 0;
    int len2 = 0;
    size_t len3 = 0;
    int i = 0;
    char *p = NULL;
    int cmp_result = 0;
    
    printf("Введите строку (до 10 символов): ");
    fgets(my_string, MY_SIZE, stdin);
    
    size_t input_len = strlen(my_string);
    if (input_len > 0 && my_string[input_len - 1] == '\n') {
        my_string[input_len - 1] = '\0';
    }
    
    len1 = 0;
    for (i = 0; my_string[i] != '\0'; i++) {
        len1++;
    }
    printf("1. Длина по индексам: %d\n", len1);
    
    len2 = 0;
    p = my_string;
    while (*p != '\0') {
        len2++;
        p++;
    }
    printf("2. Длина по указателю: %d\n", len2);
    
    len3 = strlen(my_string);
    printf("3. Длина через strlen: %zu\n", len3);
    
    for (i = 0; my_string[i] != '\0'; i++) {
        copy_string[i] = my_string[i];
    }
    copy_string[i] = '\0';
    printf("4. Копирование: оригинал=\"%s\", копия=\"%s\"\n", my_string, copy_string);
    
    for (i = 0; str1[i] != '\0'; i++) {
        dest[i] = str1[i];
    }
    dest[i] = '\0';
    for (int j = 0; str2[j] != '\0'; j++) {
        dest[i + j] = str2[j];
        dest[i + j + 1] = '\0';
    }
    printf("5. Конкатенация: \"%s\" + \"%s\" = \"%s\"\n", str1, str2, dest);
    
    cmp_result = strcmp(str_a, str_b);
    if (cmp_result < 0) {
        printf("6. strcmp: \"%s\" меньше чем \"%s\" (%d)\n", str_a, str_b, cmp_result);
    } else if (cmp_result > 0) {
        printf("6. strcmp: \"%s\" больше чем \"%s\" (%d)\n", str_a, str_b, cmp_result);
    } else {
        printf("6. strcmp: \"%s\" равно \"%s\" (%d)\n", str_a, str_b, cmp_result);
    }
    
    for (i = 0; mixed[i] != '\0'; i++) {
        lower_str[i] = tolower((unsigned char)mixed[i]);
        upper_str[i] = toupper((unsigned char)mixed[i]);
    }
    lower_str[i] = '\0';
    upper_str[i] = '\0';
    printf("7. Смена регистра: оригинал=\"%s\", нижний=\"%s\", верхний=\"%s\"\n", mixed, lower_str, upper_str);
    
    return 0;
}
