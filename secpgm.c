#include<stdio.h>
int main(){
    int x,y,z;
    printf("Enter three positive number:\n");
    scanf("%d%d%d",&x,&y,&z);
    int avg;
    avg = (x+y+z)/3;
    printf("The average of three numbers are %d",avg);
return 0;
}