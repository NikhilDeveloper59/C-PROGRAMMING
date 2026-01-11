#include <stdio.h>

int main() {
    int a = 10;
    float f = 2.5;

    printf("Size of int = %lu bytes\n", sizeof(int));
    printf("Size of float = %lu bytes\n", sizeof(float));
    printf("Size of a = %lu bytes\n", sizeof(a));
    printf("Size of f = %lu bytes\n", sizeof(f));

    return 0;
}
