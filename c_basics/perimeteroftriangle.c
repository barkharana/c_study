#include <stdio.h>
int perimeteroftriangle(int l, int b)
{
    return 2 * (l + b);
}
int main()
{
    int l, b, c;
    scanf("%d", &l);
    scanf("%d", &b);
    c = perimeteroftriangle(l, b);
    printf("perimeter of triangle a b c %d * %d : %d", l, b, c);
    return 0;
}