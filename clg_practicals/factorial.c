/* WAP in C to find factorial of a number using function.
 num = 6 , then factorial of num is 6*5*4*3*2*1 which is 720.
 num * (num-1) * (num-2) * (num-3) . . . * 1
*/
#include <stdio.h>
long factorial(int x)
{
    long f = x; // f=6    x=6
    while (x > 1)
    {
        f = f * (x - 1); // f=720
        --x;             // 1
    }
    return f;
}

int main()
{
    int num;
    long fact;
    printf("enter the value of num");
    scanf("%d", &num);
    fact = factorial(num);
    printf("Factorial of number %d = %li", num, fact);
    return 0;
}