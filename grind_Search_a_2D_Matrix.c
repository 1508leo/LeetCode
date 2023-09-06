#include <stdlib.h>
#include <stdbool.h>

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int start_row = 0, start_col=0;
    int end_row = matrixSize - 1;
    int end_col = *matrixColSize - 1;
    int mid_row, mid_col;

    while (start_row <= end_row && start_col <= end_col) {
        mid_row = start_row + (end_row - start_row) / 2;
        mid_col = start_col + (end_col - start_col) / 2;

        if (matrix[mid_row][mid_col] == target) {
            return true;
        } 
        else if (matrix[mid_row][mid_col] < target) {
            // Target is in the right half or lower half.
            if (mid_col + 1 <= end_col) { // run for this row
                start_col = mid_col + 1;
            } 
            else { // to next row
                start_row = mid_row + 1;
                start_col = 0;
            }
        } 
        else {
            // Target is in the left half or upper half.
            if (mid_col - 1 >= start_col) { // run for this row
                end_col = mid_col - 1;
            } 
            else { // to previous row
                end_row = mid_row - 1;
                end_col = *matrixColSize - 1;
            }
        }
    }

    return false;
}