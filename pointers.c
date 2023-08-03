#include<stdio.h>

int main(){
  int a = 45 , b = 67;
  int *ptr =&a;
  int *_ptr = &b;
  printf("Difference = %d\n",ptr-_ptr);//it shows the memory location difference not the actual substraction.
  printf("Comparison:%d\n",ptr==_ptr);// Cpmares the values stored at the addresses which are stored at these two pointers.


    return 0;
}