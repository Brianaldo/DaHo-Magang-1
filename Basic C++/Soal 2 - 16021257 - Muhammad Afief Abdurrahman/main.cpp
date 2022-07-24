#include "func.hpp"

int main(){
    int jenis;
    std::cout << "Masukkan jenis (angka):\n1. Segitiga siku-siku\n2. Persegi\n3. Lingkaran\n"; std::cin >> jenis;

    std::cout << func(jenis) << std::endl;
}