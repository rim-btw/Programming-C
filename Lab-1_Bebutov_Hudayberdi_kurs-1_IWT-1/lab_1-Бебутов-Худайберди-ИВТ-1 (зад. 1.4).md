 ---

## Задача 1.3 - Вычисление выражения u(x,y)

### Постановка задачи
Вычислить значение выражения:

**u(x, y) = (1 + sin²(x + y)) / (2 + |x - 2x²/(1 + |sin(x + y)|)|)**

где x и y вводятся с клавиатуры.

### Математическая модель

Пусть:
- A = sin(x + y)
- B = |A| — модуль синуса
- C = 2x²/(1 + B)
- D = |x - C|

Тогда:
**u = (1 + A²) / (2 + D)**

где:
- x, y — аргументы (действительные числа)
- u — результат вычисления

### Список идентификаторов

| Имя переменной | Тип данных | Описание |
|----------------|------------|----------|
| x | double | Аргумент x |
| y | double | Аргумент y |
| sin_xy | double | sin(x + y) |
| numerator | double | Числитель: 1 + sin²(x + y) |
| denominator | double | Знаменатель: 2 + |x - 2x²/(1 + |sin(x + y)|)| |
| u | double | Результат вычисления |

### Код программы

```c
#include <stdio.h>
#include <math.h>

int main() {
    double x, y, u;
    
    // Ввод данных
    printf("Enter x: ");
    scanf("%lf", &x);
    
    printf("Enter y: ");
    scanf("%lf", &y);
    
    // Вычисление sin(x + y)
    double sin_xy = sin(x + y);
    
    // Числитель
    double numerator = 1 + pow(sin_xy, 2);
    
    // Знаменатель
    double denominator = 2 + fabs(x - (2 * pow(x, 2)) / (1 + fabs(sin_xy)));
    
    // Результат
    u = numerator / denominator;
    
    // Вывод результата
    printf("u(x, y) = %lf\n", u);
    
    return 0;
}
