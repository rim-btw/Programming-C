#include <stdio.h>

int factorial_iter(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result = result * i;
    }
    return result;
}

int factorial_rec(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * factorial_rec(n - 1);
}

int main() {
    int n;
    scanf("%d", &n);
    int iter_result = factorial_iter(n);
    int rec_result = factorial_rec(n);
    printf("%d\n", iter_result);
    printf("%d\n", rec_result);
    return 0;
}
