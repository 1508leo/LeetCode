int largestAltitude(int* gain, int gainSize){
    int result=0, temp=0;

    for(int i = 0; i < gainSize; i++){ // add every altitude
        temp += gain[i];
        if(temp > result) // if the current altitude is higher
            result = temp; // change the result into the current altitude
    }

    return result;
}