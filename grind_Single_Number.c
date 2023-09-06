#include <stdlib.h>

int compare(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int singleNumber(int* nums, int numsSize){
    if(numsSize == 1)
        return nums[0];

    qsort(nums, numsSize, sizeof(int), compare);

    if(nums[0] != nums[1])
        return nums[0];

    for(int i = 1; i < numsSize - 1; i++){
        if(nums[i] != nums[i - 1] && nums[i] != nums[i + 1])
            return nums[i];
    }

    return nums[numsSize - 1];
}

