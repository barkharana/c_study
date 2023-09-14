#include <stdio.h>
int divide(int x, int y)
{
    return x / y;
}
int main()
{
    int a, b, c;
    scanf("%d", &a);
    scanf("%d", &b);
    c = divide(a, b);
    printf("divide of %d and %d : %d", a, b, c);
    return 0;
}