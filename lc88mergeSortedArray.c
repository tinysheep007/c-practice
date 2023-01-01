#include <stdio.h>

void merge(int* num1, int nums1Size, int m, int* num2, int nums2Size, int n){
    //pointer at the last spot of num1
    int i = m - 1;
    //pointer at the last spot of num2
    int j = n - 1;

    //going backward to fill the array num1
    for(int k = m + n - 1 ; k >= 0 ; k--){
        if(i < 0){
            *(num1 + k) = *(num2 + j);
            j--;
        } else if(j < 0){
            *(num1 + k) = *(num1 + i);
            i--;
        }else if(*(num1 + i) > *(num2+j)){
            *(num1 + k) = *(num1 + i);
            i--;
        }else{
            *(num1 + k) = *(num2 + j);
            j--;
        }
    }
}

void mergeQWithArrayRep(int* num1, int nums1Size, int m, int* num2, int nums2Size, int n){
    //pointer at the last spot of num1
    int i = m - 1;
    //pointer at the last spot of num2
    int j = n - 1;

    //going backward to fill the array num1
    for(int k = m + n - 1 ; k >= 0 ; k--){
        if(i < 0){
            num1[k] = num2[j];
            j--;
        } else if(j < 0){
            num1[k] = num1[i];
            i--;
        }else if(num1[i] > num2[j]){
            num1[k] = num1[i];
            i--;
        }else{
            num1[k] = num2[j];
            j--;
        }
    }
}
