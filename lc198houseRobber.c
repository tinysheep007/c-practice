#include <stdio.h>

int max(int num1, int num2)
{
    return (num1 > num2 ) ? num1 : num2;
}

int rob(int* nums, int numsSize){
    // dp relation
    // dp[i] = max(dp[i-1],dp[i-2]+nums[i]);
    if(numsSize == 1){
        return nums[0];
    }
    int dp[numsSize];

    //set all var to 0
    for(int i=0;i<numsSize;i++){
        dp[i] = 0;
    }

    dp[0] = nums[0];
    dp[1] = max(nums[0], nums[1]);

    for(int i=2; i<numsSize; i++){
        dp[i] = max(dp[i-1],dp[i-2]+nums[i]);
    }

    return dp[numsSize-1];
}

