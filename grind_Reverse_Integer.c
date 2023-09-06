#include <limits.h>

int reverse(int x) {
    int negative = 0;
    if (x < 0) {
        if(x == INT_MIN)
            return 0;
        x = -x;
        negative = 1;
    }
    int m, result = 0;
    while (x != 0) {
        m = x % 10;
        if (result > INT_MAX / 10 || (result == INT_MAX / 10 && m > INT_MAX % 10)) {
            return 0; 
        }
        result = result * 10 + m;
        x = x / 10;
    }
    if (negative == 1) {
        result = -result;
    }
    return result;
}
