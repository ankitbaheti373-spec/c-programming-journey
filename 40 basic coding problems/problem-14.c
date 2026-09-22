// Take:
// - Principal
// - Rate
// - Time
//   Calculate simple interest.
#include<stdio.h>
int main(){
    int principal;
    int rate;
    int time;
    int interest;
    printf("Enter the value of principal amount : ");
    scanf("%d", &principal);
    printf("Enter the value of rate of interest : ");
    scanf("%d", &rate);
    printf("Enter the value of time : ");
    scanf("%d", &time);
    interest = (principal * rate * time)/100;
    printf("The simple interest is  = %d", interest);
    return 0;
}