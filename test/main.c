#include<stdio.h>

#define N 100010

void swap(int *a, int *b);
int stringLength(const char *c);
void reverseArr(int arr[], int size);
void reversString(char *str);


int main(){
    char *x = "Hello";
    printf("%d", stringLength(x));
    return 0;
}


void swap(int *a, int *b){ //good
    //avoid empty pointer
    if(a == NULL || b == NULL) return;
    //swap
    int temp = *a;
    *a = *b;
    *b  = temp;
}

void reverseArr(int arr[], int size){ //good
    int i = 0, j = size - 1;
    while(i < j){
        swap(&arr[i], &arr[j]);
        i ++; j --;
    }

}

int stringLength(const char *c){ //good
    int res = 0;
    while(*c != '\0'){
        res ++;
        c ++; //move the pointer not the char
    }
    return res;
}