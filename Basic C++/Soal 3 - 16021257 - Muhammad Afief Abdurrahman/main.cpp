#include "func.hpp"

int main(){
    int n;
    std::cin >> n;
    while(n<=0){
        std::cout << "Input angka positif" << std::endl; std::cin >> n;
    }

    func(n);
}