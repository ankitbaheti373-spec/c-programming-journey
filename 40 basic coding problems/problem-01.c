// Take your name, age, and city as input and print them in a sentence.
#include <stdio.h>

int main() {
    char name[50];
    int age;
    char city[50];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your current age: ");
    scanf("%d", &age);

    printf("Enter the city name in which you live: ");
    scanf("%s", city);

    printf("\nMy name is %s.\n", name);
    printf("I am %d years old right now.\n", age);
    printf("I live in %s.\n", city);

    return 0;
}