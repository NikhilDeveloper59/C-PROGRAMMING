#include <stdio.h>

void print1ToN(int n) {
    if (n == 0) return;           // base case
    print1ToN(n - 1);             // recursion
    printf("%d ", n);
}

int main() {
    int n = 10;
    print1ToN(n);
    return 0;
}
