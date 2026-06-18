#include <stdio.h>
int main() {

    // char name[50];

    // printf("what is your name?");
    // //scanf("%s", name);

    // fgets(name, 50, stdin); //variable location, sizeof(total size-1 for null character), standard input
    // printf("welcome!%s\n", name);

   
//name age address school, grade temp

    char name[15];
    printf("Hello! Please enter your name.\n");
    fgets(name, 15, stdin);
    
    int age;

    printf("Please enter your age.\n", age);
    scanf("%d", &age);
   
    char address[10];

    printf("Next, enter your address.\n");
    //fgets(address, 10, stdin);
   scanf("%s", address);

    char school[30];

    printf("Now, enter your the name of your school.\n");
    //fgets(school, 30, stdin);
    scanf("%s", school);

    int grade_percentage;

    printf("Hello! Please enter your grade in percentage.\n");
    scanf("%d", &grade_percentage);
   
    float temp;

    printf("and finally enter today's temperature.\n");
    scanf("%f", &temp);

    printf("welcome!%s\n your age is %d\n your address is%s\n and the name of your school is %s\n your grade is %d\n and today's temperature is %f\n", name, age, address, school, grade_percentage, temp);

     return 0;
}
