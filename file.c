#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("slice.txt", "w");
   // printf("%c",fgetc(fptr));// this function is working rather than of fscanf shxt
   fputc('Y',fptr);//Works well

    fclose(fptr);
    return 0;
}