// Take two integers and print their sum.
#include<stdio.h>

int main(){

    int num1;
    int num2;
    int sum;
    printf("Enter your first number : ");
    scanf("%d", &num1);
    printf("Enter your second number : ");
    scanf("%d", &num2);
    sum = num1 + num2;
    printf("The sum of given two numbers is = %d", sum);

    return 0;
    
}