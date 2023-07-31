#include <stdio.h>

int conv(int n);

int main() {
    printf("Fahrenheit is: %d\n", conv(34));
    return 0;
}

int conv(int n) {
    if (n == 0) {
        return 0;
    }
    float celsius = n * (9.0 / 5.0);
    int fahrenheit = celsius + 32;
    return fahrenheit;
}

