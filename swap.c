#include <stdio.h>

int main() {

    int a,b,c;
    a = 1;
    b = 2;

    // c = a;
    // a = b;
    // b = c;

    a = a^b;
    b = b^a;
    a = a^b;
    printf("the value of a is %d, and the value of b is %d\n", a, b);

    return 0;
}