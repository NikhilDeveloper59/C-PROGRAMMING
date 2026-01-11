#include <stdio.h>
#include <ctype.h>

int main() {
    char str[200];
    int v=0, c=0, d=0, sp=0;

    printf("Enter string: ");
    fgets(str, 200, stdin);

    for(int i=0; str[i]!='\0'; i++){
        char ch = str[i];
        if(ch==' ') sp++;
        else if(isdigit(ch)) d++;
        else if(isalpha(ch)){
            ch = tolower(ch);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') v++;
            else c++;
        }
    }

    printf("Vowels=%d\nConsonants=%d\nDigits=%d\nSpaces=%d\n", v, c, d, sp);
    return 0;
}
