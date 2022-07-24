#include "WarungNasgor.hpp"
#include "WarungNasi.hpp"
#include "WarungSaltedEgg.hpp"
#include<iostream>

int main(){
    WarungNasi warnas(20000, 10, 10);
    WarungNasgor wargor(30000, 10, 15, 10);
    WarungSaltedEgg warsalt(50000, 10, 10, 10, 20);

    // masak (valid)
    warnas.masak(3);
    std::cout << warnas.getNasi() << std::endl;
    std::cout << warnas.getTelur() << std::endl;
    std::cout << warnas.getUang() << std::endl;

    wargor.masak(3);
    std::cout << wargor.getNasi() << std::endl;
    std::cout << wargor.getTelur() << std::endl;
    std::cout << wargor.getUang() << std::endl;

    warsalt.masak(3);
    std::cout << warsalt.getNasi() << std::endl;
    std::cout << warsalt.getTelur() << std::endl;
    std::cout << warsalt.getUang() << std::endl;

    // masak (invalid)
    warnas.masak(100);
    std::cout << warnas.getNasi() << std::endl;
    std::cout << warnas.getTelur() << std::endl;
    std::cout << warnas.getUang() << std::endl;

    wargor.masak(100);
    std::cout << wargor.getNasi() << std::endl;
    std::cout << wargor.getTelur() << std::endl;
    std::cout << wargor.getUang() << std::endl;

    warsalt.masak(100);
    std::cout << warsalt.getNasi() << std::endl;
    std::cout << warsalt.getTelur() << std::endl;
    std::cout << warsalt.getUang() << std::endl;
}