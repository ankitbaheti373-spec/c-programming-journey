// Take your current age and current year as input. Calculate your approximate birth year.
#include<stdio.h>
int main(){
    int birth_year;
    int current_age;
    printf("Enter your birth year : ");
    scanf("%d", &birth_year);
    current_age = 2026 - birth_year;
    printf("Approxiamately your current age would be : %d", current_age);

    return 0;
    
}