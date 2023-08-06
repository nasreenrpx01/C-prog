#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr,n;
    printf("Enter the size:");
    scanf("%d",&n);
    ptr=(int *)calloc(n,sizeof(int));
    for(int i=0;i<n;i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    printf("New allocated memory by calloc after freeing the ptr\n");
    ptr=(int *)calloc(3,sizeof(int));
    for(int i=0;i<3;i++){
        printf("%d\n",ptr[i]);
    }
    free(ptr);
    return 0;
}