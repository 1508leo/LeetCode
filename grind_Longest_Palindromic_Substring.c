#include <stdio.h>
#include <string.h>

char* longestPalindrome(char* s) {
    int len, k, start, end;
    len = strlen(s);

    for(int i = len - 1; i > -1; i--){
        k = i;
        for(int j = 0; j < len; j++){
            if(s[j] == s[k]){
                k--;
                
            }
        }
    }
}