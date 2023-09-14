// WAP c program to calculate area of triangle
// A = 1/2 * base * height

#include <stdio.h>
float areaOfTriangle(float b, float h)
{
    return (b * h) / 2;
}
int main()
{
    float base, height, area;
    printf("enter the value of base");
    scanf("%f", &base);
    printf("enter the value of height");
    scanf("%f", &height);
    area = areaOfTriangle(base, height);
    printf("base = %f , height = %f and area = %f", base, height, area);
    return 0;
}