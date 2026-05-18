#include <stdio.h>
#include <ctype.h>

int main() {
    char str[256];
    unsigned char c;
    int i;
    
    printf("Введите строку: ");
    fgets(str, sizeof(str), stdin);
    
    printf("Результат классификации:\n");
    
    for (i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        c = (unsigned char)str[i];
        printf("'%c' -> ", str[i]);
        
        if (isdigit(c)) {
            printf("цифра\n");
        } else if (isalpha(c)) {
            printf("буква\n");
        } else if (isspace(c)) {
            printf("пробел\n");
        } else if (ispunct(c)) {
            printf("пунктуация\n");
        } else {
            printf("другое\n");
        }
    }
    
    return 0;
}
