#include <stdio.h>
int main() {
    int n = 100;

    // printf("n = ");
    // scanf("%d", &n);

    for(int num = 2; num <= n; num++) {
        int prime = 1;

        for(int i = 2; i*i <= num; i++) {
            if(num % i == 0) {
                prime = 0;
                break;
            }
        }

        if(prime) printf("%d ", num);
    }

    return 0;
}
