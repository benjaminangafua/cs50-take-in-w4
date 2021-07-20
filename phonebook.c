#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    FILE *file = fopen("sample.csv", "a");

    if (file == NULL)
    {
        return 1;
    }
    char *name = malloc(sizeof(char));
    printf("name: ");
    scanf("%s", name);

    char *number = malloc(sizeof(char));
    printf("number: ");
    scanf("%s", number);

    fprintf(file,"%s, %s \n", name, number);

    free(name);
    free(number);
    fclose(file);
}