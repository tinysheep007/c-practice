#include <stdio.h>

//all element from union Obj point at the same starting address
union Obj {
    int a;
    char b;
};

int main(){
    union Obj o1;
    //if we change int a to 65, it means if we access b
    //we are getting the content at the same address that stores 65
    //it will read 65 in char form which means 65 in ASCI is A
    o1.a = 65;
    printf("01.b: %c\n", o1.b);
}