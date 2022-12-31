#include <stdio.h>

int add(int (*p)(int, int), int a, int b){
    //call the method pointer to use it from input
    return p(a, b);
}

int actualAdd(int a, int b){
    return a + b;
}

int main(){
    //create a method pointer 
    int (*p)(int, int) = actualAdd;
    //put the method pointer into the parameter for add
    printf("ans: %d\n",add(p, 5, 15));
}