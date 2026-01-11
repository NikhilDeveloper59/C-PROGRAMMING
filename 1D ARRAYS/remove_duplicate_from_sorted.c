#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter sorted elements:\n");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    int j = 0;
    for (i = 1; i < n; i++) {
        if (a[i] != a[j]) {
            j++;
            a[j] = a[i];
        }
    }

    printf("After removing duplicates:\n");
    for (i = 0; i <= j; i++) printf("%d ", a[i]);

    return 0;
}
