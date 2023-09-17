#include <stdio.h>

int z = 10;

int add(int x, int y)
{
    return x + y;
}
int main()
{
    int a, b, c;
    int z = 100;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b:");
    scanf("%d", &b);
    c = add(a, z);
    printf("Barkha tarun %d + %d= %d", a, b, c);
    return 0;
}