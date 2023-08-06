#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr=(int *)calloc(5,sizeof(int));
    printf("Enter the values:");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);

    }
    for(int i=0;i<5;i++){
        printf("At %d position,value:%d\n",i,ptr[i]);
    }
    free(ptr);
    return 0;
}