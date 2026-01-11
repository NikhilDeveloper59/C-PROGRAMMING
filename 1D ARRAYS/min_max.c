#include <stdio.h>

int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    int mn = a[0], mx = a[0];
    for (i = 1; i < n; i++) {
        if (a[i] < mn) mn = a[i];
        if (a[i] > mx) mx = a[i];
    }

    printf("Min = %d\nMax = %d\n", mn, mx);
    return 0;
}
