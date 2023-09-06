#include <stdlib.h>

// the sorting function for qsort
int compare(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

int majorityElement(int* nums, int numsSize){
     
    if(numsSize == 1) // only contain 1 element
        return nums[0];

    qsort(nums, numsSize, sizeof(int), compare); // sort the array

    int amount=1, mid;
    // get the half amount of the elements
    if(numsSize % 2 == 0){ 
        mid = numsSize / 2 ;
    }
    else{
        mid = (numsSize / 2) + 1;
    }
    // pass through the array to count the amount of number
    for(int i = 1; i < numsSize; i++){
        if(nums[i] != nums[i - 1]){ // meet other number
            amount = 1;
        }
        else{ // +1
            amount++;
        }

        if(amount >= mid){ // reach the middle amount
            return nums[i];
        }
    }

    return 0;
}