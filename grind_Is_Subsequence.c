#include <stdbool.h>
#include <string.h>

bool isSubsequence(char * s, char * t){
    int len_s = strlen(s), len_t = strlen(t), start=0, exist=0;

    for(int i = 0; i < len_s; i++){ // pass trough the s 
        exist = 0; // initialize 
        for(int j = start; j < len_t; j++){ // pass through the t
            if(s[i] == t[j]){ // find the character
                start = j + 1; // start at next character
                exist = 1; // find the character
                break;
            }
        }

        if(exist == 0) // doesn't find the character
            return false;
    }

    return true; // subsequence exist 
}