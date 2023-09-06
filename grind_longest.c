#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int length, string, longest;
    char ch, *vector;

    vector = malloc(sizeof(char));
    length = strlen(s);

    for(int i = 0; i < length; i++){
        for(int j = i; j < length; j++){
            ch = *(s + j);
            string = strlen(vector);
            for(int k = 0; k < string; k++){
                if(ch == *(vector + k)){
                    if(longest < string){
                        longest = string;
                    }
                    break;
                }
            }
        }
    }

}

int main() {
    int e;
    char *h;
    h = malloc(sizeof(char));
    e = strlen(h);
    strcpy(h, "f");
    printf("%s\n", h);
    printf("%d\n", e);
    free(h);
    
    return 0;
}
