#include <stdio.h>
#include <limits.h>
int main() {

    // int -> whole number -> 4 byte (2^32, usable insertable numb = (2^32)-1) 
    //when limit is exceeded output =undefined
    //long int = 8 byte
    long int number = 524243463;
    long int number2 = 55;

    long long int addition = number+number2;

    printf("the addition is %ld and %ld is %lld\n", number, number2, addition);
    printf("%u\n", INT_MAX);
    printf("%lu\n", LONG_MAX);
    printf("%llu", LLONG_MAX);
    // printf("gfhfhgfhfhfhhg");

    return 0;
}
//long int number = 5;
//long int number2 = 15;
//long long int number 3 = 837246329749238793;
//int addition = number+number2;
//    printf("the addition os %ld and %ld is %ld", number, number2, addition);
//float boolean, string (data types)
