// Take temperature in Celsius and convert it to Fahrenheit.
#include<stdio.h>
int main(){
    float temp_c;
    float temp_f;
    printf("Enter the surronding's temperature(in .Celsius) : ");
    scanf("%d", &temp_c);
    temp_f = (temp_c * 1.8) + 32;
    printf("The surronding's Temperature(in .Fahrenheit) is = %d", temp_f);

    return 0;
    
}