#include<stdio.h>

int main(){

int age =22;
int *ptr=&age;
printf("%u\n",ptr);
ptr++;
printf("%u\n",ptr);
printf("%d\n",*ptr);//gives same result as line 9


    return 0;
}