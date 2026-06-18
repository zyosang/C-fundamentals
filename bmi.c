#include <stdio.h>
#include <string.h>
int main() {
    //switch 
    // float height, weight, bmi;
    // printf("please enter your height in meter");
    // scanf("%f", &height);
    // printf("please enter your weight in kg");
    // scanf("%f", &weight);

    // bmi = weight/(height*height);

    // if (bmi < 18.5) {
    //     printf("you are underweight because your bmi is %f\n", bmi);
    // } else if(bmi >= 18.5 && bmi <= 24.9){
    //     printf("you have a healthy weight bcs your bmi is %f\n", bmi);
    // }else if (bmi > 25 && bmi <= 29.9){
    //     printf("you are oberweight because your bmi is %f\n", bmi);
    // }else if (bmi > 30 && bmi <= 34.9){
    //     printf("you are obese bcs your bmi is %f\n", bmi);
    // }else{
    //     printf(" you are extremely obese %f\n", bmi);
    // }

    char name[] = "kar";
    char guest[50];
    printf("please enter your name\n");
    scanf("%s", guest);

    if(!strcmp(name, guest)) {
        printf("welcome!");
    }else{
        printf("you are not a guest");
    }
    return 0;
}