#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char * longestCommonPrefix(char ** strs, int strsSize){
    char *ch;
    int amount=0;
    if(strs == NULL || strsSize == 0) // the string array is NULL
        return "";

    // let the first string be the comparison standard
    amount = strlen(strs[0]); 
    ch = strs[0];

    // compare every string in the array
    for(int i = 1; i < strsSize; i++){ 
        for(int j = 0; j < amount; j++){
            if(ch[j] != strs[i][j]){
                amount = j; // store the length of the index of the common prefix 
              break;
            }
        }

        if(amount == -1) // doesn't exist common prefix
            return "";
    }
    // copy the common prefix
    char *result;
    result = malloc((strlen(ch) + 1) * sizeof(char));
    strncpy(result, ch, amount);
    result[amount] = '\0';

    return result;
}
  