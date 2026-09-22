// Take marks of 5 subjects and calculate the total marks.
#include<stdio.h>
int main(){
    int marks1;
    int marks2;
    int marks3;
    int marks4;
    int marks5;
    int total;
    printf("Enter the marks you achieved in subject 1 : ");
    scanf("%d", &marks1);
    printf("Enter the marks you achieved in subject 2 : ");
    scanf("%d", &marks2);
    printf("Enter the marks you achieved in subject 3 : ");
    scanf("%d", &marks3);
    printf("Enter the marks you achieved in subject 4 : ");
    scanf("%d", &marks4);
    printf("Enter the marks you achieved in subject 5 : ");
    scanf("%d", &marks5);
    total = marks1 + marks2 + marks3 + marks4 + marks5;
    printf("The total marks of you 5 subjects is = %d", total);
    return 0;

}