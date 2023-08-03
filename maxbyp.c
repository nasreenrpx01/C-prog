#include<stdio.h>

int findmax(int a, int b);

int main(){
    int a=7,b=9;
    int max=findmax(a,b);
    printf("%d",max);
    return 0;
}
int findmax(int a, int b){
   return a>b?a:b;     
}