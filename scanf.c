#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    char *s = malloc(sizeof(int));
    //prompt to get user input
    printf("S: ");
    scanf("%s", s);
    //print value
    printf("S: %s\n", s);
    free(s);
}