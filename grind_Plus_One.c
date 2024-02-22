/* https://leetcode.com/problems/plus-one/ */
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize){
    for(int i = digitsSize - 1; i > -1; i--){ // start at the last digit
        if(digits[i] != 9){ // isn't 9
            digits[i]++; // +1
            *returnSize = digitsSize;
            return digits;
        }
        
        digits[i] = 0; // if is equal to 9
    }

    // every digits are 9
    int *result = malloc((digitsSize + 1) * sizeof(int));

    result[0] = 1;
    for(int i = 1; i < digitsSize + 1; i++){
        result[i] = 0;
    }

    *returnSize = digitsSize + 1;

    return result;
}