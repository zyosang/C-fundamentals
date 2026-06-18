#include <stdio.h>

int main(){
    int length, breadth, radius;
    float pi = 3.14, area, circle;
    printf("enter length\n");
    scanf("%d", &length);
   
    printf("enter breadth\n");
    scanf("%d", &breadth);

    area = length*breadth;
    printf("area of rect is %d\n", area);

    printf("enter radius\n");
    scanf("%d", &radius);

    circle = pi*(radius*radius);
    
    printf("%d\n", radius);
    printf("%f\n", pi);
    printf("area of circle is %f\n", circle);


    return 0;
}