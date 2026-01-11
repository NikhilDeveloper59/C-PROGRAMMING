#include <stdio.h>

int binarySearch(int a[], int l, int r, int key) {
    if (l > r) return -1;

    int mid = l + (r - l) / 2;
    if (a[mid] == key) return mid;
    else if (key < a[mid]) return binarySearch(a, l, mid - 1, key);
    else return binarySearch(a, mid + 1, r, key);
}

int main() {
    int a[] = {2, 5, 8, 12, 16, 23, 38};
    int n = sizeof(a) / sizeof(a[0]);
    int key = 16;

    int pos = binarySearch(a, 0, n - 1, key);
    if (pos != -1) printf("Found at index %d", pos);
    else printf("Not Found");

    return 0;
}
    