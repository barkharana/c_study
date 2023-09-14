// C program to calculate area of Square

#include <stdio.h>

// calculation in function -> returns the result.
float areaOfSquare(float x)
{
    return x * x;
}

void main()
{
    float side, area;
    printf("Enter the side of square");
    scanf("%f", &side); // 5
    area = areaOfSquare(side);
    printf("Area of Square of side %f = %f", side, area);
}