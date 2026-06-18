#include <stdio.h>

int fact(int number);

int main() {

    printf("factorial of given number is %d\n", fact(5));

};

int fact(int number){
    if (number > 1){
        return number*fact(number-1);
    } else {
        return 1;
    } 
}

//fibonacci series - output of n'th position