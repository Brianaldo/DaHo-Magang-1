#include "func.hpp"

double func(int jenis){
    if(jenis == 3){
        double r;
        std::cout << "jari-jari: "; std::cin >> r;

        return 4*M_1_PI*pow(r, 2);
    }

    if(jenis == 1){
        double alas,tinggi;
        std::cout << "alas: "; std::cin >> alas;
        std::cout << "tinggi: "; std::cin >> tinggi;

        return (0.5)*alas*tinggi;
    }

    if(jenis == 2){
        double sisi;
        std::cout << "sisi: "; std::cin >> sisi;

        return pow(sisi, 2);
    }
}