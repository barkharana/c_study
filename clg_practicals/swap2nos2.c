// WAP to swap two numbers
// a = 2 , b = 3 then a = 3 , b = 2

#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter first number");
    scanf("%d", &num1);
    printf("Enter second number");
    scanf("%d", &num2);
    // num1 = 20 num2 = 25
    num1 += num2;       // num1 = 45 , num1 = num1+ num2
    num2 = num1 - num2; // num2 = 20
    num1 -= num2;       // num1 = 25 , num1 = num1 - num2
    printf("num1 = %d and num2 = %d", num1, num2);
    return 0;
}