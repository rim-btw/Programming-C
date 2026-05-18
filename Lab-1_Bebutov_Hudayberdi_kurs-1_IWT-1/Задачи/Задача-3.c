#include <stdio.h>

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    scanf("%d %d", pa, pb);
    int max = (*pa > *pb) ? *pa : *pb;
    printf("%d\n", max);
    return 0;
}
