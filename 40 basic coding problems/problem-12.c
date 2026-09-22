// Take marks of 5 subjects and calculate their average.
#include<stdio.h>
int main(){
    int marks1;
    int marks2;
    int marks3;
    int marks4;
    int marks5;
    int total;
    int avg;
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
    avg = total/5;
    printf("The Average marks of your 5 subjects is = %d", avg);
    return 0;

}