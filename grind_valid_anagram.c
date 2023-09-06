#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int compare(const void* a, const void* b) {
    return *(int*)a - *(int*)b;
}

bool isAnagram(char * s, char * t){
    int len_s, len_t;

    len_s = strlen(s);
    len_t = strlen(t);

    if(len_s != len_t)
        return false;

    int p[len_s], q[len_s];

    for(int i = 0; i < len_s; i++){
        p[i] = s[i] - 'a';
        q[i] = t[i] - 'a';
    }

    qsort(p, len_s, sizeof(int), compare);
    qsort(q, len_s, sizeof(int), compare);

    for(int i = 0; i < len_s; i++){
        if(p[i] != q[i])
            return false;
    }

    return true;
}