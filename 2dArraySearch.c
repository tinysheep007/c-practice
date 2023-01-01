#include <stdio.h>
//剑指offer No.4
//return 1 if it's found else return 0
int findNum(int ** matrix, int matrixSize, int* matrixColSize, int target){
    //edge case
    if(matrixSize == 0 || *matrixColSize == 0){
        return 0;
    }
    
    //pointer for row and column
    //we will filter the matrix by moving to the left first, then
    //move to the right. It will be repeated until ptr out of bound

    //it will not skip any potential answer because
    //if we start at the right, it means nothing it's bigger than our current element
    //

    //start from top right
    int x = *matrixColSize - 1;
    int y = 0;

    while(x >= 0 && y < matrixSize){
        if(matrix[y][x] > target) {
            //move to the left
            x--;
        }else if(matrix[y][x] < target){
            //move down
            y++;
        }
        else{
            return 1;
        }
    }

    return 0;
}