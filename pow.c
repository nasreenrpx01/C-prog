#include<stdio.h>

int power(int n,int y);

int main(){
    int n,y;
    printf("Enter the number: \n");
    scanf("%d",&n);C
    printf("Enter the power: \n");
    scanf("%d",&y);

    printf("Power function result is %d",power(n,y));
    return 0;
}

int power(int n, int y){
    int mult =1;
    for(int i=1;i<=y;i++){
        mult*=n;
}
return mult;
}