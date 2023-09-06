int missingNumber(int* nums, int numsSize){
    int sum=0, total=numsSize; // total is number that add from 1 to n
    for(int i = 0; i < numsSize; i++){
        sum += nums[i];
        total += i;
    }

    return total - sum; // the missing number will be the total - sum
}