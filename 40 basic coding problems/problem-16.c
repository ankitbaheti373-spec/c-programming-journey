// Take the side of a square and calculate its area.
#include <stdio.h>

int main(){
    int side;
    printf("Enter the side of the square : ");
    scanf("%d", &side);
    int area;
    int perimeter;
    area = side * side;
    perimeter = 4 * side;
    printf("The area of the square : %d",  area);
    printf("The perimeter of the square : %d",  perimeter);
    return 0;
}