#include <stdio.h>
#include <string.h>

int isPalindrome(char str[], int l, int r) {
    if (l >= r) return 1;
    if (str[l] != str[r]) return 0;
    return isPalindrome(str, l + 1, r - 1);
}

int main() {
    char str[] = "madam";
    int n = strlen(str);
    if (isPalindrome(str, 0, n - 1))
        printf("Palindrome");
    else
        printf("Not Palindrome");
    return 0;
}
