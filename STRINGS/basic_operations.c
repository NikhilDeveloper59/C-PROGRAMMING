#include <stdio.h>
#include <string.h>

int main() {

    char s1[100] = "Hello";
    char s2[100] = "World";
    char temp[100];

    printf("===== WITH INITIALIZED STRINGS =====\n");
    printf("s1 = %s\n", s1);
    printf("s2 = %s\n", s2);

    // strlen()
    printf("\n1) strlen(s1) = %lu\n", strlen(s1));
    printf("   strlen(s2) = %lu\n", strlen(s2));

    // strcpy()
    strcpy(temp, s1);
    printf("\n2) strcpy(temp, s1) => temp = %s\n", temp);

    // strncpy()
    strncpy(temp, s2, 3);     // copies first 3 chars from s2
    temp[3] = '\0';           // IMPORTANT: manually null terminate
    printf("   strncpy(temp, s2, 3) => temp = %s\n", temp);

    // strcat()
    strcpy(temp, s1);         // temp = "Hello"
    strcat(temp, s2);         // temp = "HelloWorld"
    printf("\n3) strcat(temp, s2) => %s\n", temp);

    // strncat()
    strcpy(temp, s1);         // temp = "Hello"
    strncat(temp, s2, 3);     // add first 3 chars of s2 => "HelloWor"
    printf("   strncat(temp, s2, 3) => %s\n", temp);

    // strcmp()
    printf("\n4) strcmp(s1, s2) = %d\n", strcmp(s1, s2));
    printf("   strcmp(s1, \"Hello\") = %d\n", strcmp(s1, "Hello"));

    // strncmp()
    printf("   strncmp(s1, \"Hel\", 3) = %d\n", strncmp(s1, "Hel", 3));





    char a[100], b[100], result[200];

    printf("\n\n===== WITHOUT INITIALIZED (USING fgets INPUT) =====\n");
    printf("Enter string a: ");
    fgets(a, sizeof(a), stdin);

    printf("Enter string b: ");
    fgets(b, sizeof(b), stdin);

    // Remove newline '\n' added by fgets (IMPORTANT)
    a[strcspn(a, "\n")] = '\0';
    b[strcspn(b, "\n")] = '\0';

    printf("\na = %s\n", a);
    printf("b = %s\n", b);

    return 0;

}
