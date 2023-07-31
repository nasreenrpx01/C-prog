#include <stdio.h>

int main() {
    int n;
    printf("Enter the number of terms in the Fibonacci sequence: ");
    scanf("%d", &n);

    int first = 0, second = 1, next;

    printf("Fibonacci sequence of %d terms is: ", n);

    for (int i = 0; i < n; i++) {
        if (i <= 1) {
            next = i; // For the first two terms, the value is equal to the index (0 and 1).
        } else {
            next = first + second; // For subsequent terms, calculate the sum of the previous two terms.
            first = second; // Update the values for the next iteration.
            second = next;
        }

        printf("%d ", next);
    }

    printf("\n");
    return 0;
}
