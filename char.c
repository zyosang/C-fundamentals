#include <stdio.h>
#include <stdbool.h>

int main() {
    char alphabet ='k'; //1byte data type range, single character
    
    //string = array/sequence of characters
    char name[]="kar";

    //boolean = true or false
    bool isOnline = true;

    printf("the person is %d\n", isOnline); //true = 1, false = 0 %d for int 1 0r 0 output
    printf("the character is %s\n", name);
    printf("the character is %c\n", alphabet);
    
    return 0;
}