#include <stdio.h>
int volumeofcuboid(int l, int b, int h)
{
    return l * b * h;
}
int main()
{
    int length, breadth, height, volume;
    printf("find the value of volume of cuboid\n");
    printf("enter the value of length");
    scanf("%d", &length);
    printf("enter the value of breadth");
    scanf("%d", &breadth);
    printf("enter the value of height");
    scanf("%d", &height);
    volume = volumeofcuboid(length, breadth, height);
    printf("volume of cuboid %d,%d,%d:%d", length, breadth, height, volume);
    return 0;
}