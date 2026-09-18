// Basic Arithmetic
// Take two numbers and print:
// - Sum
// - Difference
// - Product
// - Quotient

#include<stdio.h>

int main(){

    float num1;
    float num2;
    float sum;
    float diff;
    float pro;
    float quo;
    printf("Enter your first number : ");
    scanf("%f", &num1);
    printf("Enter your secnd number : ");
    scanf("%f", &num2);
    sum = num1 + num2;
    printf("\nThe sum of given two numbers is = %f", sum);
    diff = num1 - num2;
    printf("\nThe Difference of given two numbers is = %f", diff);
    pro = num1 * num2;
    printf("\nThe Product of given two numbers is = %f", pro);
    quo = num1 / num2;
    printf("\nThe Quotient of given two numbers is = %f", quo);
}