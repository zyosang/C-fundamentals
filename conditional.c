#include <stdio.h>
int main() {

    int number = 10;
    if (number < 10) {
        printf("number %d is lesser or equal to 10\n", number);

    } else if(number == 10){
        printf("number %d is equal to 10\n", number);
    }
    else {
        printf("number %d is greater or equal to 10\n", number);
    };

    return 0;
}

/* conditional statement
if -> runs if statement is true
else -> runs if statement is false
*/