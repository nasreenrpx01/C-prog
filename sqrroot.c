#include<stdio.h>
#include<math.h>


 double sqrRT(double n);

 int main(){
    double number, squareRoot=0;

    printf("Enter a number: ");
    scanf("%lf", &number);

    squareRoot=sqrRT(number);
    printf("the square root of the number is %lf",squareRoot);

    return 0;
 }
 double sqrRT(double n){
    return sqrt(n);
 }