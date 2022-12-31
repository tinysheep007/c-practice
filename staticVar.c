#include <stdio.h>
#include <string.h>

void test(){
    // static means it will remember the last value when u enter this method
    static int count = 0;
    count++;
    printf("count: %d\n", count);
}

int main(){
    test();
    test();
    test();
    
}