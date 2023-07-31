#include<stdio.h>
int main(){
  int num;
  do{
    printf("Enter a number:\n");
    scanf("%d",&num);
    if(num %2==1){
        break;
    }

  }while(1);
  return 0;
}