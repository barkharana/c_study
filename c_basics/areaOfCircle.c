#include <stdio.h>

float areaofcircle(int r)
{
    const float PI = 3.14;
    return 2 * r * PI;
}

int main()
{
    float radius, area;
    scanf("%d", &radius);
    area = areaofcircle(radius);
    printf("areaofcircle %d:%d", radius, area);
    return 0;
}