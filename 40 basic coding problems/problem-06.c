// Take your current age and print your age next year.
#include<stdio.h>
int main(){

    int age;
    int next_age;
    printf("Enter your current age : ");
    scanf("%d", &age);
    next_age = age + 1 ;
    printf("In next year the age will be %d", next_age);

    return 0;
    
}