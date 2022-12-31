#include <stdio.h>
#include <string.h>

int main(){
    char string[] = "hello world!";
    char * ptr = string;
    //print the string because it is the first pointer of char array
    printf("ptr: %s\n", ptr);
    //print the second char of string
    printf("ptr[2]: %c\n", ptr[1]);
    //print the address of the second char of string
    printf("ptr + 1: %p\n", ptr + 1);
    //print the value of second char in the string
    printf("*(ptr + 1): %c\n", *(ptr + 1));
    //print the value of the first char + 1's ACSI element
    printf("*ptr + 1: %c\n",*ptr + 1);

    //when setting up 2d array, the size of inner array must be established
    int numArr[][3] = {{1,2,3},{4,5,6}};
    //set the pointer at the first level of numArr which is the start of {1,2,3}
    int * numPtr = numArr[0];
    printf("*(numPtr+4) : %d, numArr[1][1]: %d\n",*(numPtr+4), numArr[1][1]);
}