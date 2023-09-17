// examples of type conversion.
// implicit = happens internally and explicit = done by user

#include <stdio.h>
int main()
{
    int a;
    float b;
    b = 5.25;
    a = (int)b ; // explicit type conversion or Type casting
    printf("%d", a);
    return 0;
}