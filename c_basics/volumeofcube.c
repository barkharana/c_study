// Write a C program to find the volume of cube.
// understand the problem. -> V = edge^3.

#include <stdio.h>

// this is a function to calculate the volume of cube.
int volumeOfCube(int side)
{
    return side * side * side;
}

int main()
{
    int edge, volume; // variable declare , name it accordingly.
    printf("This program finds volume of cube\n");
    printf("Enter the value of edge of the cube: ");
    scanf("%d", &edge); // %d , %f , %c format specifier
    volume = volumeOfCube(edge);
    printf("Volume of cube with edge %d = %d", edge, volume);
    return 0;
}