/* https://leetcode.com/problems/remove-element/ */
#include <stdio.h>
#include <stdlib.h>

int removeElement(int* nums, int numsSize, int val){
    int place=0;
    for(int i = 0; i < numsSize; i++){
        if(nums[i] != val){
            nums[place] = nums[i];
            place++;
        }
    }

    return place;
}