#include <stdio.h>
#include <stdlib.h>

int** generate(int numRows, int* returnSize, int** returnColumnSizes) {

    // Return information
    *returnSize = numRows;
    *returnColumnSizes = malloc(numRows * sizeof(int *));

    int **result, tail;

    result = malloc(numRows * sizeof(int *));

    for(int i = 0; i < numRows; i++){
        result[i] = malloc((i + 1) * sizeof(int));
        (*returnColumnSizes)[i] = i + 1;

        if(i == 0) // First row
            result[0][0] = 1;
        else if(i == 1){ // Second row
            result[1][0] = 1;
            result[1][1] = 1;
        }
        else{ // Row >= 2
            result[i][0] = 1;
            result[i][i] = 1;

            for(int j = 1; j < i; j++){
                tail = i - j;
                if(tail < j)
                    break;
                
                result[i][j] = result[i - 1][j - 1] + result[i - 1][j];
                result[i][tail] = result[i - 1][tail- 1] + result[i - 1][tail];
            }
        }   
    }

    return result;
}