#include <stdio.h>

int main() {
    int n, rev = 0;

    printf("n=");
    scanf("%d", &n);

    while(n != 0) {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }

    printf("Reverse = %d", rev);
    return 0;
}
