#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool checkStraightLine(int **coordinates, int coordinatesSize, int* coordinatesColSize){
    int deltax, deltay, modifyx, modifyy;

        deltax = (coordinates[1][0] - coordinates[0][0]); // let the first delta x be the standard of comparison of x
        deltay = (coordinates[1][1] - coordinates[0][1]); // let the first delta y be the standard of comparison of y
    
    for(int i = 2; i < coordinatesSize; i++){
        modifyx = coordinates[i][0] - coordinates[i - 1][0];
        modifyy = coordinates[i][1] - coordinates[i - 1][1];

        if(deltax * modifyy != deltay * modifyx) // use multiplication to avoid 0 appear at the denominator
            return false;
    }

    return true;
}
