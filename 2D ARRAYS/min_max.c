#include <stdio.h>
int main() {
    int a[3][3], i, j;
    int max, min;

    printf("Enter elements:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);

    max = min = a[0][0];

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(a[i][j] > max) max = a[i][j];
            if(a[i][j] < min) min = a[i][j];
        }
    }

    printf("Max = %d\nMin = %d", max, min);
    return 0;
}
