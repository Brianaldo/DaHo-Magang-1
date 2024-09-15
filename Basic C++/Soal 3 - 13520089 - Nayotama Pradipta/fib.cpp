#include "fib.hpp"

int getFib(int n){
    if (n == 0 || n == 1)
    {
        return 1;
    } 
    else 
    {
        return getFib(n-1) + getFib(n-2);
    }
}

void printFibonnaci(int n){
    int i = 0;
    while (i < n){
        cout << getFib(i) << " ";
        i++;
    }
}