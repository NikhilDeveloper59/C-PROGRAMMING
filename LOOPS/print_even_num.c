#include <stdio.h>
int main() {
    int n = 20;
    // printf("n=");
    // scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 == 0)
            printf("%d ", i);
    }
    return 0;
}
