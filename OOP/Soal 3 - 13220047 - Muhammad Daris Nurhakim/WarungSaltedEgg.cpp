#include "WarungSaltedEgg.hpp"

WarungSaltedEgg::WarungSaltedEgg(int uang, int nasi, int telur, int telurAsin, int ayam):WarungNasi(uang, nasi, telur){
    this->telurAsin = telurAsin;
    this->ayam = ayam;
}

bool WarungSaltedEgg::masak(int pesanan){
    if (getNasi() < pesanan || getTelur() < pesanan || telurAsin < 3 * pesanan || ayam < pesanan){
        return false;
    }
    else{
        setNasi(getNasi() - pesanan);
        setTelur(getTelur() - pesanan);
        telurAsin -= pesanan;
        ayam -= pesanan;
        int pendapatanTotal = pesanan * 30000;
        setUang(getUang() + pendapatanTotal);
        return true;
    }
}