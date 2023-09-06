#include <stdbool.h>

bool isPowerOfTwo(int n){
    if(n <= 0)
        return false;
    else if(n == 1)
        return true;
    else{
        while(1){ // determine whether can be divided by 2
            if(n % 2 != 0)
                return false;
            else
                n /= 2;
            if(n == 1)
                return true;
        }
    }
}