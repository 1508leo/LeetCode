#include <stdio.h>

char nextGreatestLetter(char* letters, int lettersSize, char target){
    char ch;
    int result=100;
    ch = letters[0]; // to store the result letter
    for(int i = 0; i < lettersSize; i++){ // pass throug the string
        if(letters[i] > target && letters[i] - target < result){ // if the letter is bigger than target and the letter is smaller than the current result
            ch = letters[i];
            result = letters[i] - target;
        }
    }

    return ch;
}