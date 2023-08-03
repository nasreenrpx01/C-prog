#include<stdio.h>
int main(){

float arr[3];
printf("Enter three prices:\n");

scanf("%f",&arr[0]);
scanf("%f",&arr[1]);
scanf("%f",&arr[2]);

printf("Price 1: %.2f\n",arr[0]+(0.18*arr[0]));

printf("Price 2: %.2f\n",arr[1]+(0.18*arr[1]));

printf("Price 3: %.2f\n",arr[2]+(0.18*arr[2]));

return 0;
}