#include <stdio.h>
#include <stdlib.h>

//idk why leetcode forced me to use returnSize.
//but it has no effect on the code.

int *twoSum(int *nums, int numsSize, int target, int* returnSize){
    
    *returnSize = 2;
    int *result = (int*)malloc(*returnSize * sizeof(int));

    for(int i = 0; i < numsSize - 1; i++){
        int copyofi = i + 1;
        int control = numsSize - 1 - i;
        for(int j = 0; j < control; j++){
            if((*(nums + i) + *(nums + copyofi)) == target){
                result[0] = i;
                result[1] = copyofi;
                return result;
            }
            else{copyofi++;}
        }
    }

    *returnSize = 0;
    return NULL;

    
    
}

int main(){

    int nums[] = {3,7,1,2};
    int target = 8;
    int size = sizeof(nums)/sizeof(nums[0]);
    int returnSize = 2;
    int *address = &returnSize;

    int *result = twoSum(nums, size, target, address);


    for(int i = 0; i < 2; i++){

        printf("%d ", result[i]);

    }

    free(result);


    return 0;
}