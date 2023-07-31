#include<stdio.h>

int sum(int n);

int main(){
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);

    printf("The sum is:%d",sum(n));


 return 0;
}

int sum(int n){
    int sum=0;
    for(int i=0;i<=n;i++){
        sum+=i;
    }
  
    return sum;
}