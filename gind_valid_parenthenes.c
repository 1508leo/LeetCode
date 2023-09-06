#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

bool isValid(char * s){
    int len=strlen(s);
    char stack[len];
    int top=-1;

    for(int i = 0; i < len; i++){
        if(s[i] == '(' || s[i] == '[' || s[i] == '{'){ // if is '(', '[', '{'
            top++;
            stack[top] = s[i]; // store into stack      
        }
        else{
            if(top==-1) // doesn't store any character
                return false;
            if ((s[i] == ')' && stack[top] == '(') || (s[i]==']' && stack[top] == '[') || (s[i]=='}' && stack[top] == '{') ){ // if is correct character
                top--;
            } 
            else{ // wrong combination
                return false;
            }
        }
    }

    if(top != -1) // exist more right brackets than left
        return false;
    
    return true; // correct combinations
}

