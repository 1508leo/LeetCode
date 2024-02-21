/* https://leetcode.com/problems/zigzag-conversion/description/ */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Practice queue

typedef struct queue *queuepointer;

typedef struct queue{
    char c;
    queuepointer link;
}queue;   // Here can add "queue" or not

char* convert(char* s, int numRows) {
    char *result = malloc((strlen(s) + 1) * sizeof(char));
    int row = 0, reverse = 0, amount = 0;
    
    if(numRows <= 1)
        return s;

    queuepointer front[numRows];
    queuepointer rear[numRows];

    // Initialize
    for (int i = 0; i < numRows; i++) {
        front[i] = NULL;
        rear[i] = NULL;
    }

    while(1){
        if(amount == strlen(s))
            break;
        queuepointer temp = malloc(sizeof(struct queue));
        temp -> c = s[amount];
        temp -> link = NULL;

        // Push into queue
        if(!front[row]){
            front[row] = temp;
        }
        else{
            rear[row] -> link = temp;
        }

        rear[row] = temp;
        
        // Rule of addition
        if(row == numRows - 1){
            reverse = numRows - 2;
            row = reverse;
        }
        else if(reverse > 0){
            reverse--;
            row = reverse;
        }
        else{
            row++;
        }

        amount++;
    }

    amount = 0;

    // Store into result
    for(int i = 0; i < numRows; i++){
        while(front[i]){
            queuepointer temp = front[i];
            front[i] = front[i] -> link;
            result[amount++] = temp -> c;
            free(temp);
        }
    }

    result[amount] = '\0';

    return result;
}