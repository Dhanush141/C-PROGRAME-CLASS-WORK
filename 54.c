#include <stdio.h>
#include <string.h>

struct book {
    char title[50];
    char author[50];
    int year;
};

int main() {
    struct book books[3];
    int i;

    // Prompt the user to enter details of each book
    for(i = 0; i < 3; i++) {
        printf("Enter details of Book %d:\n", i+1);
        printf("Title: ");
        scanf("%s", books[i].title);
        printf("Author: ");
        scanf("%s", books[i].author);
        printf("Year of publication: ");
        scanf("%d", &books[i].year);
        printf("\n");
    }

    // Print the details of all 3 books
    printf("Book Details:\n");
    for(i = 0; i < 3; i++) {
        printf("Book %d\n", i+1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year of publication: %d\n", books[i].year);
        printf("\n");
    }

    return 0;
}
output:
Enter details of Book 1:
Title: The Catcher in the Rye
Author: J.D. Salinger
Year of publication: 1951

Enter details of Book 2:
Title: To Kill a Mockingbird
Author: Harper Lee
Year of publication: 1960

Enter details of Book 3:
Title: 1984
Author: George Orwell
Year of publication: 1949

Book Details:
Book 1
Title: The Catcher in the Rye
Author: J.D. Salinger
Year of publication: 1951

Book 2
Title: To Kill a Mockingbird
Author: Harper Lee
Year of publication: 1960

Book 3
Title: 1984
Author: George Orwell
Year of publication: 1949