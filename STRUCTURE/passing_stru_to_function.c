#include <stdio.h>

struct Student {
    int roll;
    char name[30];
    float marks;
};

void display(struct Student s) {
    printf("\n--- Student Info ---\n");
    printf("Roll  : %d\n", s.roll);
    printf("Name  : %s\n", s.name);
    printf("Marks : %.2f\n", s.marks);
}

int main() {
    struct Student s = {101, "Nikhil", 88.5};
    display(s);
    return 0;
}
