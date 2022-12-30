#include <stdio.h>

//using basic variable swap
int fibo(int round){
    int a = 1;
    int b = 1;
    int c = a + b;

    if(round <= 2){
        return 1;
    }
    for(int i=2 ; i <round ; ++i){
        c = a + b;
        a = b;
        b = c;
    }

    return c;
}

int fiboDP(int round){
    if(round <= 2){
        return 1;
    }

    int arr[round];
    for(int i=2;i<round;i++){
        arr[i] = 0;
    }
    arr[0] = 1;
    arr[1] = 1;
    for(int i=2;i<round;i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    return arr[round-1];
    
}
int main(){
    int ans1 = fibo(8);
    int ans = fiboDP(8);
    printf("%d\n", ans);
    return 0;
}

