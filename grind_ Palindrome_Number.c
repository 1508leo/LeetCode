/* https://leetcode.com/problems/palindrome-number/ */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool isPalindrome(int x){
    if(x < 0) // if the number is negative, it musn't be palindrome
        return false;
    else if(x < 10) // if the number is samller than 10, it must be palindrome
        return true;
    else{
        int *store, amount=0, number=0;
        store = malloc(128 * sizeof(int)); // initialize
        while(x != 0){
            store[amount] = (x % 10); // store every digit 
            x /= 10;
            amount++;
            if(amount >= 128){ // if there are more than 128 digits
                int *new_store;
                new_store = realloc(store, 128 * 2);
                store = new_store;
            }
        }
        amount--; // let the index locate at the last
        while(1){
            if(store[number] != store[amount]){ // compare the pre-index and post-index
                free(store); // if the indexes are different
                return false; // return false
            }
                
            number++; // to next pre-index
            amount--; // to next post-index

            // reach the end of the array
            if(number == amount) // odd
                break;
            if(number > amount) // even
                break;
        }
        free(store); // free the memory
    }

    return true; // return true
}