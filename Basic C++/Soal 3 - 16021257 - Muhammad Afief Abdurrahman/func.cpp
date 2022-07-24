#include "func.hpp"

int fib(int n){
    if(n==1){
        return 1;
    } else if(n==2){
        return 1;
    } else{
        return fib(n-1) + fib(n-2);
    }
}

void func(int n){
    int fibArr[n];
    for(int i = 1; i<=n; i++){
        fibArr[i-1] = fib(i);
    }

    for(int j = 1; j<=n; j++){
        std::cout << fib(j) << ' ';
    }
}