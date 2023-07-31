#include<stdio.h>
int main(){
    for(int i =5;i<=50;i++){
        printf("%d\n",i%2==1?i:0);
    }
    return 0;
}