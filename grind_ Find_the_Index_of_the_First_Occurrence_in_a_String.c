#include <string.h>

int strStr(char * haystack, char * needle){
    char *exist; // store the compare string find in haystack
    exist = strstr(haystack, needle);

    if(exist == NULL) // doesn't find it
        return -1;
    else // the index is equals to index of exist minus haystack
        return exist - haystack;
}