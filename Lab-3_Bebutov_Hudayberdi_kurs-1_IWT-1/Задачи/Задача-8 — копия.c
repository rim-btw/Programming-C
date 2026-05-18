#include <stdio.h>

enum Weekday { Понедельник, Вторник, Среда, Четверг, Пятница, Суббота, Воскресенье };

int main() {
    for (enum Weekday day = Понедельник; day <= Воскресенье; day++) {
        printf("%d ", day);
    }
    printf("\n");
    return 0;
}
