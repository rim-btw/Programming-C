#include <stdio.h>

int main() {
    double x, y, u;
    scanf("%lf %lf", &x, &y);
    u = (x + y) / 2.0 + x * y;
    printf("%.3lf\n", u);
    return 0;
}
