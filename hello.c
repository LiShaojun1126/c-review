#include <stdio.h>

int isShuixian(int number);

int main(){
    printf("Hello, World!\n");

    for(int i = 100; i <= 999; i ++){
        if(isShuixian(i) == 1){
            printf("%d\n", i);
        }
    }

    return 0;
}

int isShuixian(int number){
    int firstDigit = number / 100;
    int secondDigit = (number % 100) / 10;
    int thirdDigit = number % 10;

    if(firstDigit * firstDigit * firstDigit + secondDigit * secondDigit *secondDigit + thirdDigit * thirdDigit * thirdDigit == number) {
        return 1;
    } else {
        return 0;
    }
}