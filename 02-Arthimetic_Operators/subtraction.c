#include<stdio.h>

int main(){
    int num1;
    int num2;
    int sub;
    printf("Enter your first number : ");
    scanf("%d", &num1);
    printf("Enter your second number : ");
    scanf("%d", &num2); 
    sub = num1 - num2;
    printf("The difference of given two numbers is = %d", sub);
    return 0;
}