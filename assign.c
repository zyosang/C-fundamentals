//asssignment operator
// = -> assign(assign value on right to variable on left)
// += -> add and assign
// -= -> subtract and assign
// *= -> multiply and assign
// /= -> divide and assign
// %= -> modulus and assign

#include <stdio.h>
int main() {

    int num = 2;
    num += 2;
    printf("number after adding 2 is %d\n", num);

    num -= 2;
    printf("number after subtracting 2 is %d\n", num);

    num *= 2;
    printf("number after multiplying 2 is %d\n", num);

    num /= 2;
    printf("number after dividing 2 is %d\n", num);

    num %= 2;
    printf("number after modulus 2 is %d\n", num);

    return 0;
}