#include "WarungNasi.hpp"

WarungNasi::WarungNasi(int uang, int nasi, int telur){
    this->uang = uang;
    this->nasi = nasi;
    this->telur = telur;
}

int WarungNasi::getUang() const{
    return this->uang;
}

int WarungNasi::getNasi() const{
    return this->nasi;
}

int WarungNasi::getTelur() const{
    return this->telur;
}

void WarungNasi::setUang(int _uang){
    this->uang = _uang;
}

void WarungNasi::setNasi(int _nasi){
    this->nasi = _nasi;
}

void WarungNasi::setTelur(int _telur){
    this->telur = _telur;
}

bool WarungNasi::masak(int pesanan){
    if (getNasi() < pesanan || getTelur() < 2 * pesanan){
        return false;
    }
    else{
        setNasi(getNasi() - pesanan);
        setTelur(getTelur() - pesanan);
        int pendapatanTotal = pesanan * 10000;
        setUang(getUang() + pendapatanTotal);
        return true;
    }
}