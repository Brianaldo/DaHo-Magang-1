#include "WarungNasgor.hpp"

WarungNasgor::WarungNasgor(int uang, int nasi, int telur, int kecap) : WarungNasi(uang, nasi, telur){
    this->kecap = kecap;
}

bool WarungNasgor::masak(int pesanan){
    if((getNasi() - pesanan < 0)||(getTelur() - pesanan < 0)||(this->kecap - pesanan < 0)){
        return false;
    } else {
        setNasi(getNasi() - pesanan);
        setTelur(getTelur() - pesanan);
        this->kecap -= pesanan;
        setUang(getUang() + pesanan*15000);

        return true;
    }
}