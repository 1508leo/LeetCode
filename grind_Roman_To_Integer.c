#include <stdio.h>
#include <string.h>

int romanToInt(char * s){
    int length, ch=0, number=0;
    length = strlen(s);

    for(int i = 0; i < length; i++){
        if(i != 0)
            ch = s[i - 1];
        if(s[i] == 'I'){
            number++;
        }
        else if(s[i] == 'V'){
            number += 5;
            if(ch == 'I')
                number -= 2;
        }
        else if(s[i] == 'X'){
            number += 10;
            if(ch == 'I')
                number -= 2;
        }
        else if(s[i] == 'L'){
            number += 50;
            if(ch == 'X')
                number -= 20;
        }
        else if(s[i] == 'C'){
            number += 100;
            if(ch == 'X')
                number -= 20;
        }
        else if(s[i] == 'D'){
            number += 500;
            if(ch == 'C')
                number -= 200;
        }
        else if(s[i] == 'M'){
            number += 1000;
            if(ch == 'C')
                number -= 200;
        }
    }

    return number;
}