#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

// Structure for Book
struct Book {
    int id;
    char name[50];
    char author[50];
    int quantity;
};

struct Book books[MAX];
int count = 0;

// Function prototypes
void addBook();
void viewBooks();
void searchBook();
void issueBook();
void returnBook();
void deleteBook();
void saveToFile();
void loadFromFile();

int main() {
    int choice;

    loadFromFile();

    while (1) {
        printf("\n========= LIBRARY MANAGEMENT SYSTEM =========\n");
        printf("1. Add Book\n");
        printf("2. View Books\n");
        printf("3. Search Book\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Delete Book\n");
        printf("7. Save & Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: addBook(); break;
            case 2: viewBooks(); break;
            case 3: searchBook(); break;
            case 4: issueBook(); break;
            case 5: returnBook(); break;
            case 6: deleteBook(); break;
            case 7:
                saveToFile();
                printf(" Data Saved Successfully. Exiting...\n");
                exit(0);
            default:
                printf(" Invalid Choice! Try again.\n");
        }
    }
    return 0;
}

// Add new book
void addBook() {
    if (count >= MAX) {
        printf(" Library is full!\n");
        return;
    }

    printf("\n--- Add Book ---\n");
    printf("Enter Book ID: ");
    scanf("%d", &books[count].id);

    printf("Enter Book Name: ");
    scanf(" %[^\n]", books[count].name);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", books[count].author);

    printf("Enter Quantity: ");
    scanf("%d", &books[count].quantity);

    count++;
    printf(" Book Added Successfully!\n");
}

// View all books
void viewBooks() {
    int i;
    if (count == 0) {
        printf(" No books available!\n");
        return;
    }

    printf("\n--- All Books ---\n");
    printf("ID\tName\t\tAuthor\t\tQuantity\n");
    printf("--------------------------------------------------\n");

    for (i = 0; i < count; i++) {
        printf("%d\t%s\t\t%s\t\t%d\n", books[i].id, books[i].name, books[i].author, books[i].quantity);
    }
}

// Search book
void searchBook() {
    int id, i, found = 0;
    printf("\n--- Search Book ---\n");
    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (books[i].id == id) {
            printf(" Book Found!\n");
            printf("ID: %d\nName: %s\nAuthor: %s\nQuantity: %d\n",
                   books[i].id, books[i].name, books[i].author, books[i].quantity);
            found = 1;
            break;
        }
    }

    if (!found) printf(" Book not found!\n");
}

// Issue book
void issueBook() {
    int id, i;
    printf("\n--- Issue Book ---\n");
    printf("Enter Book ID to issue: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (books[i].id == id) {
            if (books[i].quantity > 0) {
                books[i].quantity--;
                printf(" Book Issued Successfully!\n");
            } else {
                printf(" Book out of stock!\n");
            }
            return;
        }
    }
    printf(" Book not found!\n");
}

// Return book
void returnBook() {
    int id, i;
    printf("\n--- Return Book ---\n");
    printf("Enter Book ID to return: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (books[i].id == id) {
            books[i].quantity++;
            printf(" Book Returned Successfully!\n");
            return;
        }
    }
    printf(" Book not found!\n");
}

// Delete book
void deleteBook() {
    int id, i, j;
    printf("\n--- Delete Book ---\n");
    printf("Enter Book ID to delete: ");
    scanf("%d", &id);

    for (i = 0; i < count; i++) {
        if (books[i].id == id) {
            for (j = i; j < count - 1; j++) {
                books[j] = books[j + 1];
            }
            count--;
            printf(" Book Deleted Successfully!\n");
            return;
        }
    }
    printf(" Book not found!\n");
}

// Save data to file
void saveToFile() {
    FILE *fp = fopen("library.txt", "w");
    if (fp == NULL) {
        printf(" File Error!\n");
        return;
    }

    fprintf(fp, "%d\n", count);

    for (int i = 0; i < count; i++) {
        fprintf(fp, "%d\n%s\n%s\n%d\n",
                books[i].id, books[i].name, books[i].author, books[i].quantity);
    }

    fclose(fp);
}

// Load data from file
void loadFromFile() {
    FILE *fp = fopen("library.txt", "r");
    if (fp == NULL) {
        // no file exists first time
        return;
    }

    fscanf(fp, "%d\n", &count);

    for (int i = 0; i < count; i++) {
        fscanf(fp, "%d\n", &books[i].id);
        fgets(books[i].name, 50, fp);
        books[i].name[strcspn(books[i].name, "\n")] = 0;

        fgets(books[i].author, 50, fp);
        books[i].author[strcspn(books[i].author, "\n")] = 0;

        fscanf(fp, "%d\n", &books[i].quantity);
    }

    fclose(fp);
}
