#include <stdio.h>

//we can use it to swap name
//int will be swapped to be named as num
//but we can still use int normally
#define num int

//set up constant without type because we are replacing all pi var into 3.14 
#define pi 3.14

#define nope char
#undef nope

//set up simple methods
#define add(x, y) x+y

//you can replace the var inside the string by adding "var"
#define print(i) printf("this is print by DEFINE "#i" \n")

//you can use to swap var names
//this means return string x connected with i
#define Test(i) x ##i 

//if defined pi
#ifdef pi
    #define newPi 250
#else
    #define newPi 260
#endif

//if not defined
#ifndef foo
    #define foo 10
    #if newPi == 250
        #define ok 0
    #elif newPi == 260
        #define ok 1
    #endif
#endif

int main(){
    num a = 10;
    printf("num: %d\n", a);

    printf("pi: %f\n", pi);

    printf("sum : %d\n", add(20,10));

    print(14);

    int Test(1) = 5;
    int Test(5) = 10;
    printf("x1: %d, x5: %d\n", x1, x5);
}