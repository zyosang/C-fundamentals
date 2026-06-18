#include <stdio.h>
void greet(); //function prototype
int add(int num1, int num2);
int main()
{
    //block of code to be called
    // return type, function name () {...code}
    //greet();
    int result = add(23, 454); //argument
    printf("%d\n", result);
    return 0;
}
// void greet() //function with no return type
// {
//     printf("hello world!\n");
// }

// int add(){
//     //printf("%d\n", add()); recursive function
//     return 10 +10;

// }

int add(int num1, int num2){ //parameter
    return 10 + 10;
}