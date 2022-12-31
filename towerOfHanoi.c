#include <stdio.h>
#include <string.h>

void move(char from, char to, int num){
    printf("move %dth plate from bar %c to bar %c.\n", num, from, to);
}

// a -> original pillar
// b -> temp pillar in transition
// c -> target pillar
// num -> total number of plate
void hanoi(char a, char b, char c, int num){
    if(num == 1){
        move(a, c, num);
    }else{
        hanoi(a, c, b, num - 1);
        move(a, c, num);
        hanoi(b, a, c, num - 1);
    }
}

int main(){
    hanoi('a','b','c',3);
}