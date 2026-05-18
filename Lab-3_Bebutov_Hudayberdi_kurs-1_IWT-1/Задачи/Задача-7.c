#include <stdio.h>

int main() {
    unsigned long data;
    union {
        unsigned long val;
        unsigned char byte[sizeof(unsigned long)];
    } bytes_union;
    
    scanf("%lu", &data);
    
    bytes_union.val = data;
    
    for (int i = 0; i < sizeof(unsigned long); i++) {
        printf("%u ", bytes_union.byte[i]);
    }
    printf("\n");
    
    return 0;
}
