#include <stdio.h>

const char* Temp(double n);

int main() {
    double n;
    printf("Enter the temperature in Celsius: \n");
    scanf("%lf", &n);

    printf("The temperature is %s\n", Temp(n));

    return 0;
}

const char* Temp(double n) {
    // Convert Celsius to Fahrenheit
    double fahrenheit = (n * (9.0 / 5.0)) + 32;

    if (fahrenheit >= 86) {
        return "Hot!";
    } else if (fahrenheit <= 50) {
        return "Cold!";
    } else {
        return "Moderate";
    }
}
