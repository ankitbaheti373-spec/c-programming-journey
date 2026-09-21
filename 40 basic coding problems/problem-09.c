// Take length in meters and convert it into centimeters.
#include<stdio.h>
int main(){
    float len;
    float new_len;
    printf("Enter the length of the object(in meters) :  ");
    scanf("%d", &len);
    new_len = len*100;
    printf("The givenn length of the body(in centimeters) is  = %d", new_len);

    return 0;
    
}