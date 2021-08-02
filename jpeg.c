#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;
int main(int argc, char *argv[])
{
    //get two commandline argument
    if(argc != 2){return 1;} 
    
    //open file
    FILE *file = fopen(argv[1], "r");
    if(!file){return 1;}
    //validate the first three bytes of a jpeg file
    BYTE byte[3];
    fread(byte, sizeof(BYTE), 3, file);
    (byte[0] == 0xff && byte[1] == 0xd8 && byte[2] == 0xff) ? printf("maybe\n") : printf("No\n");
}