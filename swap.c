#include <stdio.h>
//proto-type
void swap(int *x, int *y);
int main (void)
{
    int y = 1, x = 2;
    
    printf("X is %i, Y is %i\n", x, y);
    swap(&x, &y);
    
    //print already swap value
    printf("X is %i, Y is %i\n", x, y);
}
//Swap function
void swap(int *x, int *y)
{ 
    int temp = *x;
    *x = *y;
    *y = temp; 
}