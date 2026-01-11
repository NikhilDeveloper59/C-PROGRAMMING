#include <stdio.h>

int main() {
    int a = 10, b = 5, c = 20;

    printf("(a > b) && (a < c) : %d\n", (a > b) && (a < c));
    printf("(a < b) || (a < c) : %d\n", (a < b) || (a < c));
    printf("!(a > b) : %d\n", !(a > b));

    return 0;
}
