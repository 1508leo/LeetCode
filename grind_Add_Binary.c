#include <string.h>
#include <stdlib.h>

char * addBinary(char * a, char * b){
    int la=strlen(a), lb=strlen(b), max_len;
    max_len = (la > lb) ? la : lb; // get the longest length

    char *result = malloc((max_len + 2) * sizeof(char)); // +2 for null character and consider carry
    int i = la - 1, j = lb - 1, k = 0, carry=0;

    // add two strings
    while(max_len > 0 || carry == 1){
        int bita, bitb;
        bita = (i >= 0) ? a[i] - '0' : 0; // get the bit of a
        bitb = (j >= 0) ? b[j] - '0' : 0; // get the bit of b
        int sum = bita + bitb + carry; // add together
        result[k++] = sum % 2 + '0';
        carry = sum / 2; // determine carry

        max_len--;
        i--;
        j--;
    }
    result[k] = '\0';

    // reverse string
    int left=0, right=k-1;
    while(left < right){
        char temp;
        temp = result[left];
        result[left] = result[right];
        result[right] = temp;
        left++;
        right--;
    }

    return result;
}