#include <stdio.h>
#include <string.h>

int main(){
    int a = 10;
    int b = 20;
    const int* p = &a;
    int* const y = &b;

    p = &b;
    printf("For constant in front, you can change the address, but not the value\n");
    b = 25;
    printf("For constant after int*, you can change the acutal value, but not the reference address\n");
}