#include <string.h>
#include <stdlib.h>

char * mergeAlternately(char * word1, char * word2){
    if(word1 == NULL)
        return word2;
    if(word2 == NULL)
        return word1;


    char *new;
    new = malloc((strlen(word1) + strlen(word2) + 1) * sizeof(char));

    int first=0, second=0, place=0;

    while(1){
        if(first != strlen(word1)){ // add the character in world1 into new first
            new[place] = word1[first];
            first++;
            place++;
        }

        if(second != strlen(word2)){
            new[place] = word2[second];
            second++;
            place++;
        }

        if(first == strlen(word1) && second == strlen(word2)){
            new[place] = '\0'; // add null character
            return new;
        }
            
    }
}