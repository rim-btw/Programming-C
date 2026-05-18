#include <stdio.h>

typedef void (*FunctionPointer)(void);

void myFunction(void) {
    printf("Функция вызвана через указатель из структуры!\n");
}

struct MyStruct {
    FunctionPointer func;
};

int main() {
    struct MyStruct s = { myFunction };

    s.func();

    return 0;
}
