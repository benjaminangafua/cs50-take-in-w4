#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

typedef uint8_t BYTE;
int main (int argc, char *argv[])
{
    if(argc != 3){ fprintf(stderr, "Usage: Copy source destination\n"); return 1;}

    //open input file
    FILE *source = fopen(argv[1], "r");
    if(source == NULL){ printf("Could not open %s.\n", argv[1]); return 1;}

    //open output file
    FILE *destination = fopen(argv[2], "w");
    if(destination == NULL){ fclose(source); printf("Could not open %s.\n", argv[2]); return 1;}


    //Copy source to destination, one BYTE at a time
    BYTE buff;
    while(fread(&buff, sizeof(BYTE), 1, source))
    {
        fwrite(&buff, sizeof(BYTE), 1, destination);
    }
    //Close files
    fclose(source);
    fclose(destination);
    return 0;
}