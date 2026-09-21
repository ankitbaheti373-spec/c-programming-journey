// Take total minutes as input and convert it into hours and remaining minutes.
// Hint: basic arithmetic only.
#include<stdio.h>
int main(){
    int min;
    int time_hours;
    int time_min;
    printf("Enter the present time(in minutes) :  ");
    scanf("%d", &min);
    time_hours = min/60;
    time_min = min % 60;
    printf("The present time is %d Hours and %d Minutes or %d:%d", time_hours, time_min, time_hours, time_min);
    
    return 0;

}