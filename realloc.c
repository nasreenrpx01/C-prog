#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr=(int *)calloc(3,sizeof(int));
    printf("Enter any 3 numbers:");
    for(int i =0;i<3;i++){
        scanf("%d",&ptr[i]);
    }
    ptr=realloc(ptr,5);
    printf("Enter any 5 numbers:");
    for(int i=0;i<5;i++){
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<5;i++){
        printf("Position:%d, the value:%d\n",i,ptr[i]);
    }
    free(ptr);
    return 0;
}