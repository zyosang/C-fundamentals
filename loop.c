#include <stdio.h>
int main() {

    /* for loop
    for (expression; expression; expression) {
    ....code 
    }
    */

    // for (int i = 0; i<10; i++) { //i++ post increment, ++i pre increment
    //     printf("the number is: %d\n", i);
    // };
    // int number = 33;
    // for (int i = 1; i<=7; i++) {
    //     printf("%d*%d = %d\n", number, i, number*i);
    // };

    /*nested for loop*/

    // for (int i = 1; i<=10; i++) {
    //     for (int j = 1; j<=10; j++) {
    //         printf("%d %d\n", i, j); //";" only after the loop ends
    //     }

    // }

    /* break and continue*/

    // for (int i = 1; i<=10; i++) {
    //     if (i % 2 == 0) {
    //         printf("even number found!%d\n", i);
    //         break;
    //     };
    //     printf("number: %d", i);
    // };

    /*continue*/

    // for (int i = 1; i<=10; i++) {
    //     if (i % 2 == 0) {
    //         continue;
    //         printf("even number found!%d\n", i);
    //     };
    //     printf("number: %d\n", i);
    // };

    /*while loop
    while(condition){
    ....code
    }*/

    // int num = 1;
    // while(num <= 10)
    // {
    //     printf("the number is: %d\n", num);
    //     num++;
    // };
    // return 0;


/*do while*/
// do
// {
//     /* code */
// } while ({condition});
//will run at least once

// int num = 1;
// do {
//     printf("the number is: %d\n", num);
// } while(num == 1);

// int num = 1;
// int num2 = 1;
//     while(num <= 10)
//     {
//        while (num2 <= 10) {
//         printf("%d * %d = %d\n", num, num2, num*num2);
//         num2++;
//     };
//     num++;
//     num = 1;
//     };

//     do {
//             printf("%d * %d = %d\n", num, num2, num*num2);
//             num2++;
//         } while ( num2 <= 10);

//     return 0;

    // int num = 1;
    // while(num <= 10) 
    // {
    //     int num2 = 1; 
        
    //     while (num2 <= 10) {
    //         printf("%d * %d = %d\n", num, num2, num * num2);
    //         num2++; // Move to the next multiplier
    //     }
        
    //     printf("\n"); 
    //     num++; 
    // }

    int num, num1;
    num = 1;
    num1 = 1;
    do {
        do{
            printf("%d * %d = %d\n", num, num1, num*num1);
            num1++;


        }while (num1 <= 10);
        num1 = 0;
        num++;
    }while (num <= 10);

    return 0;
}
