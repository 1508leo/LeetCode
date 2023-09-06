#include <string.h>

int lengthOfLastWord(char * s){
    int len, result=0;
    len = strlen(s); // get the length of the string

    for(int i = len - 1; i > -1; i--){ // start at the last character of string
        if(s[i] != ' ') // is not space
            result++; // result +1
        else if(s[i] == ' ' && result == 0) // doesn't reach word
            continue;
        else // has contain word
            break; 
    }

    return result;
}