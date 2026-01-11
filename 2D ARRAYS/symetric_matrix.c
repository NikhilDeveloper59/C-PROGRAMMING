#include <stdio.h>


//square matrix (n×n) and A[i][j] == A[j][i] for all elements.

int main() {
    int a[10][10], i, j, n, flag = 1;

    printf("Enter order of matrix (n): ");
    scanf("%d", &n);

    printf("Enter matrix elements:\n");
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Checking symmetric condition
    for(i = 0; i < n; i++) {
        for(j = 0; j < n; j++) {
            if(a[i][j] != a[j][i]) {
                flag = 0;
                break;
            }
        }
        if(flag == 0) break;
    }

    if(flag == 1)
        printf("Matrix is Symmetric \n");
    else
        printf("Matrix is NOT Symmetric \n");

    return 0;
}
