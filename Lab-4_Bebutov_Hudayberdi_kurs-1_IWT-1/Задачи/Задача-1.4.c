#include <stdio.h>

struct Date {
    unsigned int day   : 5;
    unsigned int month : 4;
    unsigned int year  : 11;
};

int main() {
    struct Date birthday;
    int d, m, y;

    scanf("%d %d %d", &d, &m, &y);

    birthday.day = d;
    birthday.month = m;
    birthday.year = y;

    printf("%u %u %u\n", birthday.day, birthday.month, birthday.year);
    printf("%zu\n", sizeof(birthday));

    return 0;
}
