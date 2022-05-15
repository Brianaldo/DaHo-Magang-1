#include "WarungSaltedEgg.hpp"

WarungSaltedEgg::WarungSaltedEgg(int uang, int nasi, int telur, int telurAsin, int ayam) : WarungNasi(uang, nasi, telur){
    this->telurAsin = telurAsin;
    this->ayam = ayam;
}

bool WarungSaltedEgg::masak(int pesanan){
    if((getNasi() - pesanan < 0)||(getTelur() - pesanan < 0)||(this->telurAsin - (3*pesanan) < 0)||(this->ayam - pesanan < 0)){
        return false;
    } else {
        setNasi(getNasi() - pesanan);
        setTelur(getTelur() - pesanan);
        this->telurAsin -= 3*pesanan;
        this->ayam -= pesanan;

        return true;
    }
}