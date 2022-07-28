#include "WarungNasgor.hpp"

WarungNasgor::WarungNasgor(int uang, int nasi, int telur, int kecap) : WarungNasi( uang, nasi, telur)
{
	this->kecap = kecap;
}


bool WarungNasgor::masak(int pesanan){
	if(getTelur()>= pesanan && getNasi() >= pesanan && kecap >= pesanan){
		setTelur(getTelur()-pesanan);
		setNasi(getNasi()-pesanan);
		kecap = kecap - pesanan;
		int pendapatantotal = 15000*pesanan;
		setUang(getUang()+pendapatantotal);
		return true;
	}else{
		return false;
	}
}