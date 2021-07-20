#include <stdio.h>
#include <stdlib.h>
int main (void)
{
    char *s = malloc(sizeof(int));
    printf("S: ");
    scanf("%s", s);
    printf("S: %s\n", s);
    free(s);
}