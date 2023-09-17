// WAP to print from 1 to the number given.
// num = 5 , 1+2+3+4+5 = 15

#include <stdio.h>

int main()
{
    int num, sum = 0;
    printf("enter the number");
    scanf("%d", &num);
    int x = 1;
    while (x <= num)
    {
        sum = sum + x;
        ++x;
    }
    printf("%d", sum);
    return 0;
}