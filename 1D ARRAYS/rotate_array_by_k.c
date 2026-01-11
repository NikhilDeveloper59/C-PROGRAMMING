#include <stdio.h>

void reversePart(int a[], int l, int r) {
    while (l < r) {
        int temp = a[l];
        a[l] = a[r];
        a[r] = temp;
        l++;
        r--;
    }
}

void rotateRight(int a[], int n, int k) {
    k = k % n;
    reversePart(a, 0, n - 1);
    reversePart(a, 0, k - 1);
    reversePart(a, k, n - 1);
}

int main() {
    int n, k, i;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    printf("Enter k: ");
    scanf("%d", &k);

    rotateRight(a, n, k);

    printf("Rotated array:\n");
    for (i = 0; i < n; i++) printf("%d ", a[i]);

    return 0;
}
