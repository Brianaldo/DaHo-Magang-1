#include "WarungSaltedEgg.hpp"

WarungSaltedEgg::WarungSaltedEgg(int uang, int nasi, int telur, int telurAsin, int ayam) : WarungNasi( uang, nasi, telur){
	this-> telurAsin = telurAsin;
	this-> ayam = ayam;
}

bool WarungSaltedEgg::masak(int pesanan){
	if(getTelur()>= pesanan && getNasi() >= pesanan && telurAsin >= 3*pesanan && ayam >= pesanan){
		setTelur(getTelur()-pesanan);
		setNasi(getNasi()-pesanan);
		ayam = ayam - pesanan;
		telurAsin = telurAsin - pesanan;
		int pendapatantotal = 30000*pesanan;
		setUang(getUang()+pendapatantotal);
		return true;
	}else{
		return false;
	}
}

