// examples of type conversion.
// implicit = happens internally and explicit = done by user

#include <stdio.h>
int main()
{
    int a;
    float b;
    b = 5.25;
    a = b + b; // DATA type conversion. implicit type conversion. Data loss.
    printf("%d", a);
    return 0;
}