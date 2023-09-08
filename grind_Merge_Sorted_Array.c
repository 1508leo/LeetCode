
int compare(const void *a, const void *b){
    return *(int *)a - *(int *)b;
}

void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n){
    // Nums1 is NULL
    if(m == 0){
        for(int i = 0; i < n; i++)
            nums1[i] = nums2[i];
    }
    // Nums1 and nums2 are not Null
    else if(m != 0 && n != 0){
        for(int i = 0; i < n; i++){
            nums1[m] = nums2[i];
            m++;
        }
    }
    // Sorting
    qsort(nums1, m, sizeof(int), compare);
}