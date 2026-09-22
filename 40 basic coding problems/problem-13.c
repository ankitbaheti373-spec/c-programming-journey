// Take marks of 5 subjects, each out of 100, and calculate the percentage.
#include<stdio.h>
int main(){
    int marks1;
    int marks2;
    int marks3;
    int marks4;
    int marks5;
    int total;
    int percent;
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
    percent = total*100/600;
    printf("The percentagee achieved is  = %d", percent);
    return 0;

}