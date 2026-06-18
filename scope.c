#include <stdio.h>

void show(int num);
int anothernum = 20; //global scope

int main(){

    int num = 10; //local scope
    show (num);

    printf("another number is %d\n", anothernum);
    return 0;
}    

void show(int num) {
    printf("number is %d\n", num);
    printf("another number is %d\n", anothernum);
}