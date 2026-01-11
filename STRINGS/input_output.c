#include <stdio.h>

int main() {
    char str[50];

    printf("Enter string: ");
    scanf("%s", str);   // reads only 1 word

// For full sentence:fgets(str, sizeof(str), stdin);

    printf("You entered: %s", str);
    return 0;
}
