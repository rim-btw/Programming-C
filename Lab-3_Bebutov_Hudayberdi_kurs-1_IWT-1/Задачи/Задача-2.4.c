#include <stdio.h>
#include <stdlib.h>
#include <string.h>

enum Type { INT, FLOAT, STRING };

struct Tagged {
    enum Type type;
    union {
        int i;
        float f;
        char *s;
    } data;
};

void print_value(struct Tagged *item) {
    switch (item->type) {
        case INT:
            printf("%d\n", item->data.i);
            break;
        case FLOAT:
            printf("%.2f\n", item->data.f);
            break;
        case STRING:
            printf("%s\n", item->data.s);
            break;
    }
}

int main() {
    int n = 3;
    struct Tagged *arr = (struct Tagged*)malloc(n * sizeof(struct Tagged));
    
    arr[0].type = INT;
    arr[0].data.i = 42;
    
    arr[1].type = FLOAT;
    arr[1].data.f = 3.14159;
    
    arr[2].type = STRING;
    arr[2].data.s = (char*)malloc(20 * sizeof(char));
    strcpy(arr[2].data.s, "Hello, World!");
    
    for (int i = 0; i < n; i++) {
        print_value(&arr[i]);
    }
    
    free(arr[2].data.s);
    free(arr);
    
    return 0;
}
