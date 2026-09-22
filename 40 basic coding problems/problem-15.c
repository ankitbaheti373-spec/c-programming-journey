// Take length and breadth. Calculate:
// - Area
// - Perimeter
#include<stdio.h>
int main(){
    int length;
    int breadth;
    int area;
    int perimeter;
    printf("Ennter the value of length : ");
    scanf("%d", &length);
    printf("Enter the value of breadth : ");
    scanf("%d", &breadth);
    area = length * breadth;
    perimeter = 2*(length + breadth);
    printf("The perimeter of your given rectangle dimensions is = %d", perimeter);
    printf("The area of your given rectangle dimensions is  = %d", area);
    return 0 ;
}