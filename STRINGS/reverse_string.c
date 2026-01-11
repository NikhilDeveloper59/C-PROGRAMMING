#include <stdio.h>

int main() {
    char str[100];
    int i = 0, j, temp;

    printf("Enter string: ");
    fgets(str, 100, stdin);

    while (str[i] != '\0' && str[i] != '\n') i++;
    j = i - 1;

    for (int k = 0; k < j; k++, j--) {
        temp = str[k];
        str[k] = str[j];
        str[j] = temp;
    }

    printf("Reverse: %s", str);
    return 0;
}
