#include<stdio.h>
int main(){
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    int fact=1;
    for (int i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("The final factorial value is: %d",fact);
    return 0;

}