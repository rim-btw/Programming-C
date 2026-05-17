#include <stdio.h>

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", pa, pb);
    printf("%d\n", *pa + *pb);
    return 0;
}
