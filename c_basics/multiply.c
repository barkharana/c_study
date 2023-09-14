#include <stdio.h>
int multiply(int x, int y)
{
    return x * y;
}

int main()
{
    int a, b, c;
    scanf("%d", &a); // a = 5
    scanf("%d", &b); // b = 6
    c = multiply(a, b);
    printf("product of %d and %d: %d", a, b, c);
    return 0;
}
