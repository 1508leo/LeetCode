int searchInsert(int* nums, int numsSize, int target) {
    int left = 0, right = numsSize - 1;
    while(left <= right){
        int middle = (left + right) / 2;
        if(nums[middle] < target){
            left = middle + 1;
        }
        else if(nums[middle] > target){
            right = middle - 1;
        }
        else{
            return middle; // exist position
        }
    }
    // insertion position
    return left;
}