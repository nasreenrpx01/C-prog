#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr=(int *)calloc(5,sizeof(int));
    for(int i=0;i<5;i++){
        ptr[i]=i*2+1;
        printf("%d\t",ptr[i]);
    }
    printf("\n");
    printf("Reassigning even values and increasing its size\n");
    ptr=realloc(ptr,6);
    for(int i=1;i<7;i++){
        ptr[i]=i*2;
        printf("%d\t",ptr[i]);

    }
    free(ptr);
    return 0;
}