#include <stdio.h>
int main() {
    int a[3][3], i, j;

    printf("Enter elements:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    for(i=0;i<3;i++){
        int sum = 0;
        for(j=0;j<3;j++){
            sum += a[i][j];
        }
        printf("Sum of row %d = %d\n", i+1, sum);
    }
    return 0;
}
