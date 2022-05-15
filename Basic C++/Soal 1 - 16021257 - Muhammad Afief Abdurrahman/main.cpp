#include "func.hpp"

int main(){
    int n;
    std::string nama[n];
    int usia[n];

    for(int i = 0; i<n; i++){
        std::cout << "nama" << i << ": "; std::cin >> nama[i];
        std::cout << "usia" << i << ": "; std::cin >> usia[i];
    }
}