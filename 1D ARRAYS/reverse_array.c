#include <stdio.h>

void reverse(int a[], int n) {
    int i = 0, j = n - 1;
    while (i < j) {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
}

int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    reverse(a, n);

    printf("Reversed array:\n");
    for (i = 0; i < n; i++) printf("%d ", a[i]);

    return 0;
}
