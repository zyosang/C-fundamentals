#include <stdio.h>

int count(int number);

int main() {

    //printf("time remaining: %d\n", count(5));
    //return 0;
    count(5);

};

int count(int number) {
    if (number > 0) {
        printf("%d\n", number);
        return count(number - 1);
    }else{
        printf("%d\n", 0);
        return 0;
    }
}