#include <stdio.h>
int main() {
    int n = 7;
    long long fact = 1;

    // printf("n=");
    // scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        fact *= i;

    printf("Factorial = %lld", fact);
    return 0;
}
