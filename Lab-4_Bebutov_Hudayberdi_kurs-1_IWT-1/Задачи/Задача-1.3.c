#include <stdio.h>
#include <math.h>

typedef struct {
    double re;
    double im;
} Complex;

int main() {
    Complex z;
    Complex sum = {1.0, 0.0};
    Complex term = {1.0, 0.0};
    double factorial = 1.0;
    int k = 1;
    double eps = 1e-8;
    double mag;

    printf("Введите действительную и мнимую части: ");
    scanf("%lf %lf", &z.re, &z.im);

    while (1) {
        factorial *= k;
        
        Complex next_term;
        next_term.re = (term.re * z.re - term.im * z.im) / factorial;
        next_term.im = (term.re * z.im + term.im * z.re) / factorial;
        
        term = next_term;
        
        sum.re += term.re;
        sum.im += term.im;
        
        mag = sqrt(term.re * term.re + term.im * term.im);
        
        if (mag < eps) {
            break;
        }
        
        k++;
    }
    
    printf("exp(z) = %.6lf + %.6lfi\n", sum.re, sum.im);
    
    return 0;
}
