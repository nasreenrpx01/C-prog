#include <stdio.h>

int main() {
    int arr[] = {1, 3, 4, 5, 6};
    int n = 5;
    int elements[] = {7, 8, 9};
    // Store the updated size after inserting elements

    for (int i = 0; i < 3; i++) { // Change the loop condition to i < 3
        arr[n + i] = elements[i];
    }
 int updatedSize = n + 3;
    for (int i = 0; i < updatedSize; i++) {
        printf("%d\t", arr[i]);
    }

    return 0;
}

