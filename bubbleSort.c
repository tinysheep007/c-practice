#include <stdio.h>

int main(){

    int arr[7] = {4,-34,12,123124,1,32,0};

    printf("unsorted array: ");
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");


    for(int i=0;i<7;i++){
        for(int j=1;j<7;j++){
            //if the next element is bigger than current
            if(arr[j] < arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }

    printf("sorted array: ");
    for(int i=0;i<7;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    return 0;
}