#include <stdio.h>

int main() {
    int n, i;
    printf("Enter n (array size will be n-1): ");
    scanf("%d", &n);

    int a[n - 1];
    printf("Enter %d elements:\n", n - 1);
    for (i = 0; i < n - 1; i++) scanf("%d", &a[i]);

    int sum = 0;
    for (i = 0; i < n - 1; i++) sum += a[i];

    int total = n * (n + 1) / 2;
    printf("Missing number = %d\n", total - sum);

    return 0;
}
