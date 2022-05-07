#include "WarungSaltedEgg.hpp"


WarungSaltedEgg::WarungSaltedEgg(int uang, int nasi, int telur, int telurAsin, int ayam) : WarungNasi(uang, nasi, telur)
{
    this->telurAsin = telurAsin;
    this->ayam = ayam;
}

bool WarungSaltedEgg::masak(int pesanan)
{
    if (getNasi() >= pesanan && getTelur() >= pesanan && this->telurAsin >= 3*pesanan && this->ayam >= pesanan)
    {
        setNasi(getNasi() - pesanan);
        setTelur(getTelur() - pesanan);
        this->telurAsin -= 3 * pesanan;
        this->ayam -= pesanan;
        int pendapatan = pesanan * 30000;
        setUang(getUang() + pendapatan);
        return true;
    }
    else 
    {
        return false;
    }
}