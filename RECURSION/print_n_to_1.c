#include <stdio.h>

void printNTo1(int n) {
    if (n == 0) return;
    printf("%d ", n);
    printNTo1(n - 1);
}

int main() {
    int n = 10;
    printNTo1(n);
    return 0;
}
