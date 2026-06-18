#include <stdio.h>


    int fib(int n){
        if (n == 0){ 
            return 0;
        }else if (n ==1){ 
            return 1; 
        }else{
            return fib(n-1) + fib(n-2);
        } 
        //if (n <=2{
        //return 0;
        //else return (....fib); 
    }

    int main() {
        //printf("%d\n", fib(10));
    int n;
    printf("enter the value of n: ");
    scanf("%d", &n);
    if (n < 1) {
        printf("invalid input\n");
    }else{
        printf("fibonacci number is %d\n", fib(n));
    }
    return 0;
}