#include <stdio.h>
#include <stdlib.h>

void swap_pairs(int *arr, size_t size)
{
    for (size_t i = 0; i + 1 < size; i += 2)
    {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

void print_array(const int *arr, size_t size)
{
    for (size_t i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main()
{
    const int n = 12;
    int *arr = (int*)malloc(n * sizeof(int));
    
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    printf("Before swap: ");
    print_array(arr, n);
    
    swap_pairs(arr, n);
    
    printf("After swap:  ");
    print_array(arr, n);
    
    free(arr);
    arr = NULL;
    
    return 0;
}
