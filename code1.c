#include <stdio.h>
int main()
{
    int x = 10, y = 20;
    printf("Before Swapping: x = %d, y = %d\n", x,y);
    
    // Code to swap 'x' and 'y'
    y = y - x; // y now becomes 10
    x = x + y; // x becomes 20
    
 
    printf("After Swapping: x = %d, y = %d", x, y);
 
    return 0;
}
