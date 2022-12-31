#include <stdio.h>
#include <string.h>

int main(){
    int a = 10;
    int *p = &a;

    *p = 666;
    printf("a: %d at %p\n", a, p);
    printf("p: %d at %p\n", a, p);
}