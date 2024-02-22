/* https://leetcode.com/problems/remove-duplicates-from-sorted-array/ */
#include <stdio.h>
#include <stdlib.h>

/* For qsort */
int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

int removeDuplicates(int* nums, int numsSize){
    int amount = 0;

    for (int i = 1; i < numsSize; i++){
        int exist = 0;
        for (int j = 0; j <= amount; j++){
            if (nums[i] == nums[j]){
                exist = 1;
                break;
            }  
        }
        if (exist == 0){
            amount++;
            nums[amount] = nums[i];
        }
    }

    qsort(nums, amount + 1, sizeof(int), compare);

    return amount + 1;
}