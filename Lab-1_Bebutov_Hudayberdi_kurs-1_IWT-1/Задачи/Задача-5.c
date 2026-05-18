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
    ptr = arr + n - 1;
    for (int i = 0; i < n; i++, ptr--)
        printf("%d ", *ptr);
    printf("\n");
    free(arr);
    return 0;
}
