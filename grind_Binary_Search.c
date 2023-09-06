// Binary search
int search(int* nums, int numsSize, int target){
    int mid, start = 0, position = -1, end = numsSize - 1;

    while(start <= end){
        mid = (start + end) / 2;

        if(nums[mid] == target){
            position = mid;
            break;
        }
        else if(target < nums[mid])
            end = mid - 1;
        else
            start = mid + 1;
    }

     return position;
}