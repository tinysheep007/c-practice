#include <stdio.h>
#include "extra.h"
//to use self-made function in other files
//we first make a .h file with same name as the source of the function
//write return type, name, and parameter with var name and ; at the end

//then in the source .c file of where the implemention is store
//add #include "name of .h file.h"

//include the .h file in the main too

//in order to run the file use
//gcc -o extraTest extraTest.c extra.c

//after -o means under what name the .exe will be created as
//we must compile both our main to test our functions and the 
//source file .c of the new created function we 
//wanted to import
int main(){
    int c = sum(10,20);
    printf("%d\n", c);
}