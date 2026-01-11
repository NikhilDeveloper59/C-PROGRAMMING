#include <stdio.h>

struct Address {
    char city[30];
    char state[30];
    int pincode;
};

struct Student {
    int roll;
    char name[50];
    struct Address addr;
};

int main() {
    struct Student s;

    printf("Enter Roll: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter City: ");
    scanf(" %[^\n]", s.addr.city);

    printf("Enter State: ");
    scanf(" %[^\n]", s.addr.state);

    printf("Enter Pincode: ");
    scanf("%d", &s.addr.pincode);

    printf("\n--- Student Details ---\n");
    printf("Roll    : %d\n", s.roll);
    printf("Name    : %s\n", s.name);
    printf("City    : %s\n", s.addr.city);
    printf("State   : %s\n", s.addr.state);
    printf("Pincode : %d\n", s.addr.pincode);

    return 0;
}
