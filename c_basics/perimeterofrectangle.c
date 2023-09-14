#include <stdio.h>
int perimeterofrectangle(int l, int b)
{
    return 2 * (l + b);
}
int main()
{
    int length, breadth, perimeter;
    printf("entre the value of length");
    scanf("%d", &length);
    printf("entre the value of breadth");
    scanf("%d", &breadth);
    perimeter = perimeterofrectangle(length, breadth);
    printf("perimeter of rectangle %d,%d:%d", length, breadth, perimeter);
    return 0;
}