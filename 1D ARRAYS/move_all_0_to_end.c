#include <stdio.h>

int main() {
    int n, i, j = 0;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    for (i = 0; i < n; i++) {
        if (a[i] != 0) {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }

    printf("Result:\n");
    for (i = 0; i < n; i++) printf("%d ", a[i]);

    return 0;
}
