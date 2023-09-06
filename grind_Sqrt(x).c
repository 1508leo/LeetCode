int mySqrt(int x){
    if (x == 0 || x == 1) {
        return x;
    }

    int start = 1;
    int end = x;
    int ans = 0;

    // Using binary search to find the value
    while (start <= end) {
        int mid = start + (end - start) / 2;

        // To avoid integer overflow
        if (mid <= x / mid) {
            start = mid + 1;
            ans = mid;
        } else {
            end = mid - 1;
        }
    }

    return ans;
}