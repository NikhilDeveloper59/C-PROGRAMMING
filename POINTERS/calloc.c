#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int *arr;

    printf("Enter size of array: ");
    scanf("%d", &n);

    arr = (int*)calloc(n, sizeof(int));  // initializes with 0

    if(arr == NULL)
    {
        printf("Memory allocation failed!\n");
        return 0;
    }

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Array elements are:\n");
    for(i = 0; i < n; i++)
        printf("%d ", arr[i]);

    free(arr);
    return 0;
}
