#include <stdbool.h>
#include <string.h>

bool isIsomorphic(char * s, char * t){
    if(strlen(s) != strlen(t))
        return false;
    
    char *first, *second;
    for(int i = 0; i < strlen(s); i++){
        // find if the character has appear latter
        first = strchr(s + i + 1, s[i]); 
        second = strchr(t + i + 1, t[i]);

        if(first != NULL && second != NULL){ // does appear
            if((first - s) != (second - t)) // compare the location
                return false; // if is different 
            }  
        else if(first == NULL && second == NULL){ // does not find 
            continue;
        }
        else // one has found it
            return false;
    }

    return true;
}

// Better way
//bool isIsomorphic(char * s, char * t){
//   int sind[129]={0},tind[129]={0};
//   for(int i=0;i<strlen(s);i++){
//       if(sind[s[i]]!=tind[t[i]])
//            return false;
//       else 
//            sind[s[i]]=tind[t[i]]= i+1;
//   }
//   return true;

//}