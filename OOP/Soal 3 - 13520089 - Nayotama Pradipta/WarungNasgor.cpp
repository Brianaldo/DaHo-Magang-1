#include "WarungNasgor.hpp"


WarungNasgor::WarungNasgor(int uang, int nasi, int telur, int kecap) : WarungNasi(uang, nasi, telur)
{
    this->kecap = kecap;
}

bool WarungNasgor::masak(int pesanan)
{
    if (getNasi() >= pesanan && getTelur() >= pesanan && kecap >= pesanan)
    {
        setNasi(getNasi() - pesanan);
        setTelur(getTelur() - pesanan);
        kecap -= pesanan;
        int pendapatan = pesanan * 15000;
        setUang(getUang() + pendapatan);
        return true;
    }
    else 
    {
        return false;
    }
}