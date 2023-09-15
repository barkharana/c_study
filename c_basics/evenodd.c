// WAP to check if number is even or odd
// num = 3 , if num/2 gives remainder as 0, then it is even number.
#include <stdio.h>

int main()
{
    int num, rem;
    printf("Enter the number:");
    scanf("%d", &num);
    rem = num % 2;
    if (rem == 0)
    {
        printf("Number %d is even", num);
    }
    else
    {
        printf("Number %d is odd", num);
    }

    return 0;
}