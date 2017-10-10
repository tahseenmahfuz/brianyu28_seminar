#include <stdio.h>

int main(void)
{
    int a = 34;
    int b = 50;

    printf("a is %i\n", a);
    printf("b is %i\n", b);

    // swapping...
    int temp = a;
    a = b;
    b = temp;

    printf("a is now %i\n", a);
    printf("b is now %i\n", b);
}
