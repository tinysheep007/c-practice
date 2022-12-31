#include <stdio.h>
#include <string.h>

void swap(int, int);

int main(){
    int a = 10;
    int b = 20;
    swap(a,b);
    printf("%d, %d\n", a, b);
}

// do not work because the a and b here it's local variable within the function 
void swap(int a, int b){
    int c = a;
    a = b;
    b = c;
}