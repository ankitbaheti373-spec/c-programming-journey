#include<stdio.h>

int main(){
    int num1;
    int num2;
    int div;
    printf("Enter your first integer : ");
    scanf("%d", &num1);
    printf("Enter your second integer : ");
    scanf("%d", &num2);
    div = num1 / num2;
    printf("The Quotient of given two integers is = %d", div);
    return 0;
}