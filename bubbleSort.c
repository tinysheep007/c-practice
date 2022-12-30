#include <stdio.h>

int main(){

    int arr[7] = {4,-34,12,123124,1,32,0};
    int length = 7;
    
    printf("unsorted array: ");
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");

    
    int lastRound = length - 1;
    //do not need to compare the last element to nothing
    for(int i=0;i < lastRound ; i++){
        int check = 0;
        for(int j=1; j < length - i ; j++){
            //if the next element is bigger than current
            if(arr[j] < arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
                check = 1;
            }
        }
        if(check == 0){
            break;
        }
    }

    printf("sorted array: ");
    for(int i=0;i<length;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}