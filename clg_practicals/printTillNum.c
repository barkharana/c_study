// WAP to print from 1 to the number given.
// num = 5 , 1 2 3 4 5

#include <stdio.h>

int main()
{
    int num;
    printf("enter the number");
    scanf("%d", &num);
    int x = 1;
    while (x <= num)
    {
        printf("%d\n", x);
        ++x;
    }
    return 0;
}