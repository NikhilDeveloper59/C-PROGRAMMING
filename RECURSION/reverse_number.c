#include <stdio.h>

int reverseNum(int n, int rev) {
    if (n == 0) return rev;
    return reverseNum(n / 10, rev * 10 + (n % 10));
}

int main() {
    int n = 12345;
    printf("Reverse = %d", reverseNum(n, 0));
    return 0;
}
