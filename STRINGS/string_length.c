#include <stdio.h>

int main() {
    char str[100];
    int len = 0;
    printf("Enter string: ");
    fgets(str, 100, stdin);

    // int len = strlen(str) predifind
    while (str[len] != '\0' && str[len] != '\n')
        len++;

    printf("Length = %d", len);
    return 0;
}
