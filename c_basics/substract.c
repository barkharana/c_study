#include <stdio.h>
int substract(int x, int y)
{
    return (x - y);
}
int main()
{
    int a, b, c;
    a = 9;
    b = 5;
    c = substract(a, b);
    printf("substract %d and %d:%d", a, b, c);
    return 0;
}