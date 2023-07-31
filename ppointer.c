#include<stdio.h>

int main(){
     int x, *ptr,**pptr;
     ptr=&x;
     pptr=&ptr;

     *ptr = 7;

     printf("**pptr=%d\n",**pptr);

     return 0;

}