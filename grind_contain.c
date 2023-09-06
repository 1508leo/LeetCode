#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* For qsort */
int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

bool containsDuplicate(int* nums, int numsSize) {
    // Sorting
    qsort(nums, numsSize, sizeof(int), compare);

    // Check whether the element is duplicated
    for (int i = 1; i < numsSize; i++) {
        if (nums[i] == nums[i - 1]) {
            return true; // contain duplicated elements
        }
    }

    return false;
}

int main()
{
    int r=0;
    int l[100] = {1, 2, 3, 4, 1, 1, 3, 4, 2};

    r = containsDuplicate(l, 9);

    printf("%d\n", r);

}