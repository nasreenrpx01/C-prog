#include<stdio.h>

int main(){
    
        int x,y;
        printf("Enter two numbers:\n");
        scanf("%d%d",&x,&y);
        if(x>y){
            printf("%d is the smallest.",y);

        }else{
            printf("%d is the smallest.",x);
        }
        
    
    return 0;
}