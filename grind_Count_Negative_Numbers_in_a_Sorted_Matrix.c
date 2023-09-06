int countNegatives(int** grid, int gridSize, int* gridColSize){
    int neg=0;
    for(int i = 0; i < gridSize; i++){ // pass through every elements in the matrix
        for(int j = 0; j < gridColSize[i]; j++){
            if(grid[i][j] < 0) // if the element is negative
                neg++; // count plus 1
        }
    }

    return neg;
}