#include <stdio.h>

int main() {
    int a, b;

    a = (b = 5, b + 10); // first b=5 then b+10 => 15

    printf("b = %d\n", b);
    printf("a = %d\n", a);

    return 0;
}
