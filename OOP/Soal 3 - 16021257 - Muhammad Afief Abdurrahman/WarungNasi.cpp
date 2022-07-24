#include "WarungNasi.hpp"

// Constructor
WarungNasi::WarungNasi(int uang, int nasi, int telur){
    this->uang = uang;
    this->nasi = nasi;
    this->telur = telur;
}

// Getter
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

void WarungNasi::setTelur(int _telur){
    this->telur = _telur;
}

void WarungNasi::setNasi(int _nasi){
    this->nasi = _nasi;
}

bool WarungNasi::masak(int pesanan){
    if((this->nasi-pesanan < 0)||(this->telur - (2*pesanan) < 0)){
        return false;
    } else {
        this->nasi -= pesanan;
        this->telur -= 2*(pesanan);
        this->uang += pesanan*10000;

        return true;
    }
}