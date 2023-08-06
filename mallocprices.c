#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr=(float *)malloc(5*sizeof(float));
    ptr[0]=50.6;
    ptr[1]=50.2;
    ptr[2]=60.7;
    ptr[3]=50.6;
    ptr[4]=40.6;
    printf("The prices are:\n");
    for(int i=0;i<5;i++){
        printf("%.2f\t",ptr[i]);
    }
free(ptr);
return 0;
}