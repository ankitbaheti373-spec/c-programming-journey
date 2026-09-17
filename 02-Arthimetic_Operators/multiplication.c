#include<stdio.h>

int main(){
    int num1;
    int num2;
    int mult;
    printf("Enter your first integer : ");
    scanf("%d", &num1);
    printf("Enter your second integer : ");
    scanf("%d", &num2);
    mult = num1 * num2;
    printf("The product of given two integers is = %d", mult);
    return 0;
}