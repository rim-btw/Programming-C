#include <stdio.h>
#include <math.h>

typedef struct {
    char name[20];
    double x, y, z;
} Vector;

double dot_product(Vector *a, Vector *b) {
    return a->x * b->x + a->y * b->y + a->z * b->z;
}

Vector cross_product(Vector *a, Vector *b) {
    Vector result;
    result.x = a->y * b->z - a->z * b->y;
    result.y = a->z * b->x - a->x * b->z;
    result.z = a->x * b->y - a->y * b->x;
    sprintf(result.name, "%s x %s", a->name, b->name);
    return result;
}

double vector_length(Vector *a) {
    return sqrt(a->x * a->x + a->y * a->y + a->z * a->z);
}

void print_vector(Vector *a) {
    printf("%s: (%.2f; %.2f; %.2f)\n", a->name, a->x, a->y, a->z);
}

int main() {
    Vector v1 = {"A", 1.0, 2.0, 3.0};
    Vector v2 = {"B", 4.0, 5.0, 6.0};

    printf("=== Исходные векторы ===\n");
    print_vector(&v1);
    print_vector(&v2);

    double dot = dot_product(&v1, &v2);
    printf("\nСкалярное произведение %s · %s = %.2f\n", v1.name, v2.name, dot);

    Vector cross = cross_product(&v1, &v2);
    printf("Векторное произведение: ");
    print_vector(&cross);

    double len1 = vector_length(&v1);
    double len2 = vector_length(&v2);
    printf("\nМодуль |%s| = %.2f\n", v1.name, len1);
    printf("Модуль |%s| = %.2f\n", v2.name, len2);

    return 0;
}
