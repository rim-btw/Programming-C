#include <stdio.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;
    union Data *ptr = &data;
    int choice;

    ptr->i = 42;
    printf("int: %d\n", ptr->i);

    ptr->f = 3.14159;
    printf("float: %f\n", ptr->f);

    sprintf(ptr->str, "Hello, Union!");
    printf("string: %s\n", ptr->str);

    printf("\nВыберите тип для вывода (1=int, 2=float, 3=string): ");
    scanf("%d", &choice);

    if (choice == 1)
        printf("int: %d\n", ptr->i);
    else if (choice == 2)
        printf("float: %f\n", ptr->f);
    else if (choice == 3)
        printf("string: %s\n", ptr->str);
    else
        printf("Неверный выбор\n");

    return 0;
}
