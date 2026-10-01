// Take the radius of a circle and calculate its area.

// Take the radius of a circle and calculate its circumference
#include <stdio.h>

int main(){
    float radius;
    float area;
    float perimeter;
    printf("Enter the radius of the circle : ");
    scanf("%f", &radius);
    // Calculate area and circumference
    area = 3.14 * radius *radius;
    perimeter = 2 * 3.14 * radius;
    printf("The area of the circle : %f",area);
    printf("The perimeter of the circle : %f",perimeter);
    return 0;
}   