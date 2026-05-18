#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;

int main() {
    Node* head = NULL;
    Node* tail = NULL;
    Node* current = NULL;
    int n, value;
    
    scanf("%d", &n);
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &value);
        Node* newNode = (Node*)malloc(sizeof(Node));
        newNode->data = value;
        newNode->next = NULL;
        newNode->prev = tail;
        
        if (tail != NULL) {
            tail->next = newNode;
        }
        tail = newNode;
        
        if (head == NULL) {
            head = newNode;
        }
    }
    
    current = head;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
    
    current = tail;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->prev;
    }
    printf("\n");
    
    current = head;
    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
    
    return 0;
}
