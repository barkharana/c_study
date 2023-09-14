#include <stdio.h>
int areaofrectangle(int l, int b)
{
    return l * b;
}

int main()
{
    int length, breadth, area;
    printf("Enter the length of rectangle");
    scanf("%d", &length);
    printf("Enter the breadth of rectangle");
    scanf("%d", &breadth);
    area = areaofrectangle(length, breadth);
    printf("Length = %d and Breadth = %d then Area = %d", length, breadth, area);
    return 0;
}