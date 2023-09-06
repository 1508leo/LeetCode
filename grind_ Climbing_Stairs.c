int climbStairs(int n){
    int stairs[45]; // there are 45 stairs

    for(int i = 0; i < n; i++){ // use the recurrence way to calculate the possible method to climb
        if(i == 0) // 1 stair
            stairs[i] = 1;
        else if(i == 1) // 2 stairs
            stairs[i] = 2;
        else
            stairs[i] = stairs[i - 1] + stairs[i - 2]; // climb 1 stair or 2 stairs to get the goal stair
    }

    return stairs[n - 1]; // n stairs methods store in n - 1 index  
}