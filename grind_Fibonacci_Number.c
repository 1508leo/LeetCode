// Fibonacci Number

int fibonacci[31]; // store the number to reduce calculate time

int fib(int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else{
        fibonacci[0] = 0;
        fibonacci[1] = 1;

        for(int i = 2; i <= n; i++){
            fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
        }

        return fibonacci[n];
    }
}