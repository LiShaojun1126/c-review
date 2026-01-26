#include<stdio.h>

#define N 100010

void swap(int *a, int *b);
int stringLength(const char *c);
void reverseArr(int arr[], int size);
void reverseString(char *str);


int main(){
    //char *x = "Hello"; //char *x is READ-ONLY!!! == const char *
    char x[] = "Hello";
    printf("%d", stringLength(x));
    reverseString(x);
    printf("%s", x); //print the string
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

void reverseString(char *str){ //good

    if(str == NULL || *str == '\0') return;
    long long size =  stringLength(str);
    long long i = 0, j = size - 1;
    while(i < j){
        // char temp = *(str + i);
        // *(str + i) = *(str + j);
        // *(str + j) = temp;
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;

        i++; j--;
    }
}