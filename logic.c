
//comparison operator
// == -> equal to -> checks if the right and left side match
// != -> not equal to -> check if the right and left side do not match
// > -> greater than -> checks if the left is greater than right side
// < -> less than -> checks if the left side is smaller than right side
// => -> greater or equal to -> checks if the left is greater or equal than right side
// <= -> less or equal to -> checks if the left side is smaller or equal to than right side

//logical operator
// && -> AND -> if both is true
// || -> OR -> if either side is true, we get true
// ! -> NOT -> reverse, true becomes false and vice versa

//bitwise operator
// & -> AND -> if both bits are 1, we get 1
// | -> OR -> if either bit is 1 we get 1
// ~ -> NOT -> reverses the bit
// ^ -> XOR -> if either bit is 1, we get 1, else we get 0
// >> -> right shift -> shifts the bit to right by set amount
// << -> left shift -> adss o bit from the right by set amount


#include <stdio.h>
#include <string.h>
 int main() {
        char ab = 'k';
        char ba = 'k';
        char name1[] = "kar";
        char name2[] = "kar"; //kar sangmo dolma syangtan
        printf("%s == %s: %d\n", name1, name2, strcmp(name1, name2)); 
        
        printf("%c == %c: %d\n", ab, ba, ab == ba);


//     int numb1 = 10;
//     int numb2 =20;

//     printf("%d == %d: %d\n", numb1, numb2, numb1==numb2);
//     printf("%d != %d: %d\n", numb1, numb2, numb1!=numb2);
//     printf("%d > %d: %d\n", numb1, numb2, numb1>numb2);
//     printf("%d < %d: %d\n", numb1, numb2, numb1<numb2);
//     printf("%d >= %d: %d\n", numb1, numb2, numb1>=numb2);
//     printf("%d <= %d: %d\n", numb1, numb2, numb1<=numb2);

//     int num1 = 10;
//     int num2 =20;    

//     printf("%d == %d && %d > %d: %d\n", 
//             num1, num2,
//             num1, num2,
//             num1 == num2 && num1 > num2);

//     printf("%d != %d && %d < %d: %d\n", 
//             num1, num2,
//             num1, num2,
//             num1 != num2 && num1 < num2);

//     printf("%d == %d || %d > %d: %d\n", 
//             num1, num2,
//             num1, num2,
//             num1 == num2 || num1 < num2);

//     printf("!0 : %d\n", !0);
//     printf("!1 : %d\n", !1);

//     int num3 = 2;
//     int num4 = 3;

//     printf("%d & %d: %d\n", num3, num4, num3 & num4);
//     printf("%d | %d: %d\n", num3, num4, num3 | num4);
//     printf("%d ^ %d: %d\n", num3, num4, num3 ^ num4);
//     printf("~ %d: %d\n", num3, num3, ~ num4);
//     printf("%d >> 2: %d\n", num3, num4, num3 >> num4);
//     printf("%d << %d: %d\n", num3, num4, num3 << num4);

    return 0;
}