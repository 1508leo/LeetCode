#include <string.h>

int lengthOfLongestSubstring(char * s){
    int table[95] = {0};
    int length = strlen(s);
    int amount = 0;
    int result = 0; // initialize. If s is empty

    // Initial point
    for(int j = 0; j < length; j++){
        for(int i = j; i < length; i++){ // run for the subset
            table[s[i] - ' ']++;
            // Occur repeated character
            if(table[s[i] - ' '] > 1){
                if(amount > result)
                    result = amount;
                amount = 0; // reset
                // reset table
                memset(table, 0, sizeof(table));
                break;
            }
            else
                amount++;
        }
    }

    if(amount > result)
        result = amount;

    return result;
}