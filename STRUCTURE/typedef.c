#include <stdio.h>

typedef struct Student {
    int roll;
    char name[20];
} Student;

int main() {
    Student s = {101, "Nikhil"};
    printf("Roll: %d\nName: %s\n", s.roll, s.name);
    return 0;
}
