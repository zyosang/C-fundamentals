//arithmetic
// +, -, *, /, %
#include <stdio.h>

int main() {
    int number1 =10;
    int number2 = 20;

    int addition = number1+number2;
    int subtraction = number1-number2;
    int multiplication = number1*number2;
    float division = (float)number1/number2; //typecast
    int reminder = number1%number2;

    printf("addition of %d and %d is:%d\n", number1, number2, addition);
    printf("subtraction of %d and %d is:%d\n", number1, number2, subtraction);
    printf("multiplication of %d and %d is:%d\n", number1, number2, multiplication);
    printf("division of %d and %d is:%.2f\n", number1, number2, division); //to display only 2 decimal points
    printf("modulus of %d and %d is:%d\n", number1, number2, reminder);
return 0;
}

// temp convert degree to kelvin to fahreinheit to celcius