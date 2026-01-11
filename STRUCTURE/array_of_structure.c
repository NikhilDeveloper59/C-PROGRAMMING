#include <stdio.h>

struct Student {
    int roll;
    char name[50];
    float marks;
};

int main() {
    int n, i;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student s[n];

    for(i = 0; i < n; i++) {
        printf("\nEnter details of student %d\n", i+1);

        printf("Roll: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    printf("\n--- All Students Details ---\n");
    for(i = 0; i < n; i++) {
        printf("\nStudent %d\n", i+1);
        printf("Roll  : %d\n", s[i].roll);
        printf("Name  : %s\n", s[i].name);
        printf("Marks : %.2f\n", s[i].marks);
    }

    return 0;
}
