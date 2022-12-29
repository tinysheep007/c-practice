#include <stdio.h>

int main(){
    for(int i=1; i<10 ;i++){
        for(int j=1; j<i+1; j++){
            printf("%d x %d = %d ", i, j, i * j);
        }
        printf("\n");
    }
}