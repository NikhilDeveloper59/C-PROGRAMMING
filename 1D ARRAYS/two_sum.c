#include <stdio.h>

int main() {
    int n, x, i, j;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter target sum x: ");
    scanf("%d", &x);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] == x) {
                printf("Pair found: %d + %d = %d\n", a[i], a[j], x);
                return 0;
            }
        }
    }

    printf("No pair found\n");
    return 0;
}
