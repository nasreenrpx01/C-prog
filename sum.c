#include <stdio.h>

int main() {
    int num, sum = 0;
    printf("Enter a natural number:\n");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) { // Corrected the loop condition
        sum += i;
    }
    printf("Sum of the %d natural numbers is %d\n", num, sum);

    for (int i = num; i >= 1; i--) {
        printf("%d\n", i);
    }
    
    return 0;
}
