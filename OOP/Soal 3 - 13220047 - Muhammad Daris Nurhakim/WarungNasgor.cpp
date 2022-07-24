#include "WarungNasgor.hpp"

WarungNasgor::WarungNasgor(int uang, int nasi, int telur, int kecap):WarungNasi(uang, nasi, telur){
    this->kecap = kecap;
}

bool WarungNasgor::masak(int pesanan){
    if (getNasi() < pesanan || getTelur() < pesanan || kecap < pesanan){
        return false;
    }
    else{
        setNasi(getNasi() - pesanan);
        setTelur(getTelur() - pesanan);
        kecap -= pesanan;

        int pendapatanTotal = pesanan * 15000;
        setUang(getUang() + pendapatanTotal);

        return true;
    }
}