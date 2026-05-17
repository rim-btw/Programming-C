#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    if (!arr) return 1;
    int *ptr = arr;
    for (int i = 0; i < n; i++, ptr++)
        scanf("%d", ptr);
    ptr = arr;
    int sum = 0;
    for (int i = 0; i < n; i++, ptr++)
        sum += *ptr;
    printf("%d\n", sum);
    free(arr);
    return 0;
}
