#include "fib.hpp"

int main(){
    int n;
    cin >> n;
    while (n <= 0) {
        cout << "Input angka positif" << endl;
        cin >> n;
    }
    if (n > 0)
    {
        printFibonnaci(n);
    }
    return 0;
}