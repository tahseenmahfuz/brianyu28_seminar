#include <stdio.h>

int main(void)
{
    int x = 51;
    int y = 50;
    
    printf("x is %i\n", x);
    printf("y is %i\n", y);
    
    // swapping...
    int temp = x;
    x = y;
    y = temp;
    
    printf("x is now %i\n", x);
    printf("y is now %i\n", y);
}