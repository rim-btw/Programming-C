#include <stdio.h>

int main() {
    int a = 1234567890;
    unsigned char *ptr = (unsigned char*)&a;
    for (int i = 0; i < sizeof(a); i++)
        printf("%d ", ptr[i]);
    printf("\n");
    return 0;
}
