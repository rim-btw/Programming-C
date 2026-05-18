#include <stdio.h>

void cross3(const double a[3], const double b[3], double out[3])
{
    out[0] = a[1] * b[2] - a[2] * b[1];
    out[1] = a[2] * b[0] - a[0] * b[2];
    out[2] = a[0] * b[1] - a[1] * b[0];
}

double dot3(const double a[3], const double b[3])
{
    return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}

double triple3(const double a[3], const double b[3], const double c[3])
{
    double cross_result[3];
    cross3(b, c, cross_result);
    return dot3(a, cross_result);
}

int main()
{
    double a[3], b[3], c[3];
    
    scanf("%lf %lf %lf", &a[0], &a[1], &a[2]);
    scanf("%lf %lf %lf", &b[0], &b[1], &b[2]);
    scanf("%lf %lf %lf", &c[0], &c[1], &c[2]);
    
    double result = triple3(a, b, c);
    
    printf("%.0lf\n", result);
    
    return 0;
}
