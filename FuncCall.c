#include <stdio.h>

void square(int n);
void _square(int *n);

int main() {
    int num = 4;
    
    square(num);
    printf("number = %d\n", num);

    _square(&num); // Pass the address of 'num' to the function
    printf("number = %d\n", num);

    return 0;
}

void square(int n) {
    n = n * n;
    printf("Square = %d\n", n);
   
}

void _square(int *n) {
    *n = (*n) * (*n);
    printf("Square = %d\n", *n);
}
