#include <stdio.h>

int main(){
    char str[200];
    int freq[256] = {0};

    printf("Enter string: ");
    fgets(str);

    for(int i=0; str[i]!='\0'; i++){
        freq[(unsigned char)str[i]]++;
    }

    printf("Character Frequency:\n");
    for(int i=0;i<256;i++){
        if(freq[i]>0 && i!='\n')
            printf("%c = %d\n", i, freq[i]);
    }

    return 0;
}
