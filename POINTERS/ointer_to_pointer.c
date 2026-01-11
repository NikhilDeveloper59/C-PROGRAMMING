#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    int **pp = &p;

    printf("Value of a   = %d\n", a);
    printf("Using *p     = %d\n", *p);
    printf("Using **pp   = %d\n", **pp);

    return 0;
}
