#include<stdio.h>

int main(){
    FILE *fptr;
    fptr= fopen("File.txt","r");
    int n;
    fscanf(fptr,"%d",&n);
    printf("%d\t",n);
    fscanf(fptr,"%d",&n);
    printf("%d\t",n);
    fscanf(fptr,"%d",&n);
    printf("%d\t",n);
    fscanf(fptr,"%d",&n);
    printf("%d\t",n);
    fscanf(fptr,"%d",&n);
    printf("%d\t",n);
   

    fclose(fptr);
    return 0;

}