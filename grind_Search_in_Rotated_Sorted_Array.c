/* https://leetcode.com/problems/search-in-rotated-sorted-array/ */
int search(int* nums, int numsSize, int target) {
    int start = 0;
    int end = numsSize - 1;
    int mid;
    int position = -1;

    while(start <= end){
        mid = (start + end) / 2;

        if(nums[mid] == target){
            position = mid;
            break;
        }

        if(nums[start] <= nums[mid]){
            // left is sorted
            if(nums[start] <= target && target < nums[mid])
                end = mid - 1;
            else
                start = mid + 1;
        }
        else{
            // right is sorted
            if(nums[mid] < target && target <= nums[end])
                start = mid + 1;
            else
                end = mid - 1;
        }
    }

    return position;
}
