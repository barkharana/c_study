// C program to calculate Simple Interest

#include <stdio.h>

// si = prt/100
float simpleInterest(float x, float y, float z)
{
    float u;
    u = (x * y * z) / 100;
    return u;
}

int main()
{
    float p, r, t, si;
    p = 20059;
    r = 10.5;
    t = 3;
    si = simpleInterest(p, r, t);
    printf("%f", si);

    return 0;
}