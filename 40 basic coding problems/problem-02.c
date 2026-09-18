// Take a student's name, roll number, age, and Percentage and display all details neatly.
#include<stdio.h>

int main(){

    char name[50];
    int roll_no;
    int age;
    int percentage;
    printf("Enter your first name : ");
    scanf("%s", name);
    printf("Enter your roll number : ");
    scanf("%d", &roll_no);
    printf("Enter your  age : ");
    scanf("%d", &age);
    printf("Enter your percentage : ");
    scanf("%d", &percentage);
    printf("\nStudent details\n");
    printf("Name : %s", name);
    printf("\nRoll Number : %d", roll_no);
    printf("\nAge of student : %d", age);
    printf("\nPercentage : %d", percentage);

    return 0;
    
}