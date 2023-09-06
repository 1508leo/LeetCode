#include <stdlib.h>

void moveZeroes(int* nums, int numsSize){
    int amount=0;
    for(int i = 0; i < numsSize; i++){ // pass through all the array
        if(nums[i] == 0) // get the amount of the 0
            amount++;
        else
            nums[i - amount] = nums[i]; // move the index of other element
    }

    if(amount != 0){ // the array contain 0
        while(amount != 0){ // replace 0 in the end of index
            nums[numsSize - amount] = 0;
            amount--;
        }
    }
}