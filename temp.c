#include <stdio.h>
int main() {

    float kelvin, celcius, fahrenheit;

    printf("Enter the temperature in celcius  \n");
    scanf("%f", &celcius);

    kelvin = celcius + 273.15;
    fahrenheit = celcius*(9/5)+32;

    printf("the temperature in kelvin is %.2f\n and in fahrenheit is %.2f\n", kelvin, fahrenheit);

    return 0;
}