#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;
    printf("Enter size: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter elements:\n");
    for (i = 0; i < n; i++) scanf("%d", &a[i]);

    int largest = INT_MIN, second = INT_MIN;

    for (i = 0; i < n; i++) {
        if (a[i] > largest) {
            second = largest;
            largest = a[i];
        } else if (a[i] > second && a[i] != largest) {
            second = a[i];
        }
    }

    if (second == INT_MIN) printf("No second largest (all same or size < 2)\n");
    else printf("Second Largest = %d\n", second);

    return 0;
}
