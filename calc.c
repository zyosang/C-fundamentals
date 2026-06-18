#include <stdio.h>
int main() {
    int number1, number2;
    printf("input your first number\n");
    scanf("%d", &number1);

    printf("input your second number\n");
    scanf("%d", &number2);

    int add;
    add = number1+number2;
    printf("output is of addition is: %d \n ", add);

    int sub;
    sub = number1-number2;
    printf("output is of subtraction is:%d \n ", sub);

    int mult;
    mult = number1*number2;
    printf("output is of multiplication is:%d \n ", mult);

    float div;
    div = (double)number1/number2;
    printf("output is of division is:%f \n ", div);

    return 0;
}