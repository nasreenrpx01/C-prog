#include<stdio.h>

void swap(char *n, char *y);

int main(){

    char n,y;
    n='N';
    y='Y';

printf("n:%c,y:%c\n",n,y);
swap(&n,&y);
printf("n:%c,y:%c\n",n,y);

    return 0;

}

void swap(char *n,char *y){
 char Temp;
 Temp= *n;
 *n = *y;
 *y = Temp;
}

