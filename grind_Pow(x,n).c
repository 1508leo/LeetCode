double calculate(double x, int n){ // use recurrence way, O(logn)
    if(n == 1)
        return x;
    else if(n % 2 == 0)
        return calculate(x, n / 2) * calculate(x, n / 2); // even
    else
        return calculate(x, n / 2) * calculate(x, n / 2) * x; // odd
}

double myPow(double x, int n){
    if(x == 0)
        return 0;
    if(x == 1 || n == 0)
        return 1;

    if(n > 0){
        return calculate(x, n);
    }
    else{ // n < 0
        return 1 / calculate(x, n);
    }
}

