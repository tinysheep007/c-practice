#include <stdio.h>
#include <string.h>

//logic of quick sort in 5 steps
//1. Pick a base

//2. make 2 pointers represent the left and right side

//3. start from the right. If the arr[r] is bigger than base, we simply
//move the r to the left. Otherwise, put arr[r] into arr[l]

//4. start from the left. If the arr[l] is smaller than base, we simply
//move the l to the right. Otherwise, put arr[l] into arr[r]

//5. when we pointer meet, that is the place when we put the final spot of the base num

//6. at the end, the left side of base is smaller than base. The right side of array
//it bigger than the base. However, the entire array is not ganrateed sorted
void quickSort(int arr[], int left, int right){
    //base case
    //only 1 element left
    if(left >= right){
        return;
    }

    // choose base from the left most element
    int base = arr[left];
    //set up pointers one for left and one for right
    int l = left;
    int r = right;

    while(l < r){
        //move right cursor
        while(l < r && arr[r] >= base){
            //continue move to the right
            r--;
        }
        //when we exit the while loop, it means, something gotta swap now
        //arr[r] will be < base, and we gotta swap
        arr[l] = arr[r];
        //move left cursor
        while(l < r && arr[l] <= base){
            l++;
        }
        //arr[l] will be > base, we have to swap
        arr[r] = arr[l];
    }

    //when two cursor met, we will replace the center with the base
    arr[r] = base;

    //recursion through 2 other parts of array
    //r-1 means one place on the left of final base spot
    quickSort(arr, left, r-1);
    //r+1 means one palce on the right of the final base spot
    quickSort(arr, r+1, right);

}

int main(){
    int arr[] = {123,2,1,-123,0,24,78};
    int length = 7;
    printf("unsorted: ");
    for(int i=0;i<length;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    quickSort(arr, 0, length - 1);

    printf("sorted: ");
    for(int i=0;i<length;i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}