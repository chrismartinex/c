#include <stdio.h>

int main() {
    char firstName[50];
    char lastName[50];
    int age;

printf("Enter your first name: ");
    scanf("%s", firstName);

    printf("Enter your last name: ");
    scanf("%s", lastName);

    printf("Enter your age: ");
    scanf("%d", &age);

    // print the user's definittion

    printf("My first name is: %s\n", firstName);
    printf("My last name is: %s\n", lastName);
    printf("My age is: %d\n", age);

    return 0;

}
