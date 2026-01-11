#include <stdio.h>

int main()
{
    int arr[5], i;
    int *ptr;

    printf("Enter 5 elements: ");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    ptr = arr;   // same as &arr[0]

    printf("Array elements using pointer:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", *(ptr + i));

    return 0;
}
