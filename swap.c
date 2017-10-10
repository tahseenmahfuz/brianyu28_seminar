#include <stdio.h>

int main(void)
{
    int a = 34;
    int b = 50;

    printf("x is %i\n", x);
    printf("y is %i\n", y);

    // swapping...
    int temp = x;
    a = b;
    b = temp;

    printf("x is now %i\n", x);
    printf("y is now %i\n", y);
}
