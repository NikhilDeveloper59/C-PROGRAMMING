#include <stdio.h>

// 1) Function Declaration / Prototype
int add(int a, int b);

int main() {
    int x, y, sum;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    // 3) Function Call
    sum = add(x, y);

    printf("Sum = %d\n", sum);

    return 0;
}

// 2) Function Definition
int add(int a, int b) {
    return a + b;
}
