#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    printf("The table of %d is as follows:\n",num);
    for(int i=10;i>=1;i--){
        printf("%d\n",num*i);
    }
    return 0;

}