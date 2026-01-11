#include <stdio.h>

int main() {
    int a = 5;

    printf("Pre Increment: %d\n", ++a);
    printf("Post Increment: %d\n", a++);
    printf("Now a = %d\n", a);

    printf("Pre Decrement: %d\n", --a);
    printf("Post Decrement: %d\n", a--);
    printf("Now a = %d\n", a);

    return 0;
}
