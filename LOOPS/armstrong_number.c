#include <stdio.h>
#include <math.h>
int main() {
    int n, temp, digits = 0;
    double sum = 0;

    printf("n = ");
    scanf("%d", &n);

    temp = n;
    // count number of digits
    while(temp != 0) {
        digits++;
        temp /= 10;
    }

    temp = n;

    while(temp != 0) {
        int digit = temp % 10;
        sum += pow(digit, digits);
        temp /= 10;
    }

    if((int)sum == n) printf("Armstrong");
    else printf("Not Armstrong");

    return 0;
}
