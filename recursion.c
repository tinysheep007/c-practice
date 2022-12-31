#include <stdio.h>
#include <string.h>

int factorial(int);
int fiboRecursion(int);

int main(){
    printf("%d\n", factorial(4));
}

int fiboRecursion(int num){
    if(num <= 2){
        return 1;
    }
    return fiboRecursion(num-1) + fiboRecursion(num-2);
}

int factorial(int num){
    if(num == 1){
        return 1;
    }
    return factorial(num-1) * num;
}