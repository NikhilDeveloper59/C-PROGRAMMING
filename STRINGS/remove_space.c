#include <stdio.h>

int main(){
    char str[200];
    int i=0, j=0;

    printf("Enter string: ");
    fgets(str);

    while(str[i] != '\0'){
        if(str[i] != ' ')
            str[j++] = str[i];
        i++;
    }
    str[j]='\0';

    printf("Without spaces: %s", str);
    return 0;
}
