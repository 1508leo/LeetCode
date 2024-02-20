/* https://leetcode.com/problems/pascals-triangle-ii/submissions/1180447062/ */
#include <stdio.h>
#include <stdlib.h>

int calculate(int n, int m){
    int table[n + 1][m + 1]; // table to store the value 

    for(int i = 0; i < n + 1; i++){
        for(int j = 0; j < m + 1; j++){
            if(j == i)
                table[i][j] = 1;
            else if(j > i)
                table[i][j] = 0;
            else if(j == 0)
                table[i][j] = 1;
            else if(j == 1)
                table[i][j] = i;
            else
                table[i][j] = table[i - 1][j] + table[i - 1][j - 1];
        }
    }

    return table[n][m];
}

int* getRow(int rowIndex, int* returnSize) {

    *returnSize = rowIndex + 1;

    int *result, value;

    result = malloc((rowIndex + 1) * sizeof(int)); // Size of the row in pascal triangle

    // The value in each row of pascal triangle is palindrome
    for(int i = 0; i <= (rowIndex / 2); i++){
        value = calculate(rowIndex, i);
        result[i] = value;
        result[rowIndex - i] = value;  
    }

    return result;
}