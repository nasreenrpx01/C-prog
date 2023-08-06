#include <stdio.h>

int main()
{
    FILE *fptr = fopen("Sum.txt", "r");
    int a, b;
    fscanf(fptr, "%d", &a);
    fscanf(fptr, "%d", &b);

    fclose(fptr);
    fptr = fopen("Sum.txt", "w");
    fprintf(fptr, "%d", a + b);

    fclose(fptr);
    return 0;
}