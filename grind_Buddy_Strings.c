#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool buddyStrings(char * s, char * goal){
    int first, second,  mismatch=0, len_s, len_g, alphabet[26]={0};
    len_s = strlen(s);
    len_g = strlen(goal);

    if(len_s != len_g || len_s < 2)
        return false;
    
    if(strcmp(s, goal) == 0){
        
    }
    for(int i = 0; i < len_s; i++){
        alphabet[s[i] - 'a']++;
        if(s[i] != goal[i]){
            if(mismatch == 0)
                first = i;
            else
                second = i;
            mismatch++;
        }

        if(mismatch > 2)
            return false;
    }
    
    if(strcmp(s, goal) == 0){
        for(int i = 0; i < 26; i++)
            if(alphabet[i] > 1)
                return true;
        
        return false;
    }

    if(s[first] == goal[second] && s[second] == goal[first])
        return true;
    else
        ;
}

int main(){
    char s[10] = "abac", g[10] = "abad";
    bool a;
    
    a = buddyStrings(s, g);

    printf("%d\n", a);

    return 0;
}