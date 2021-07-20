#include <stdio.h>

void swap(int *x, int *y);
int main (void)
{
    int y = 1, x = 2;
    
    printf("X is %i, Y is %i\n", x, y);
    swap(&x, &y);
    
    printf("X is %i, Y is %i\n", x, y);
}
void swap(int *x, int *y)
{ 
    int temp = *x;
    *x = *y;
    *y = temp; 
}