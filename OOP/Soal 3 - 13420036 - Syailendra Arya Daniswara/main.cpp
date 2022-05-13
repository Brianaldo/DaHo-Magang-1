#include "WarungNasgor.hpp"
#include "WarungNasi.hpp"
#include "WarungSaltedEgg.hpp"
#include <iostream>
using namespace std;

int main(){

	WarungNasi Nasi= WarungNasi(10000, 50, 50);
    WarungNasgor Nasigoreng = WarungNasgor(15000, 50,50, 60);
	WarungSaltedEgg telurasin = WarungSaltedEgg(30000, 50, 50, 60, 50);
	
	Nasi.masak(5);
	cout<< "5"<<"Nasi"<<endl;
	cout<< Nasi.getNasi()<<endl;
	cout<< Nasi.getTelur()<<endl;
	cout << Nasi.getUang()<<endl;
	Nasigoreng.masak(4);
	cout<<"4"<<"NasiGoreng"<<endl;
	cout<< Nasigoreng.getNasi()<<endl;
	cout<< Nasigoreng.getTelur()<<endl;
	cout<< Nasigoreng.getUang()<<endl;
	Nasigoreng.masak(3);
	cout<<"3"<<"SaltedEGG"<<endl;
	cout<<telurasin.getNasi()<<endl;
	cout<<telurasin.getTelur()<<endl;
	cout<<telurasin.getUang()<<endl;
	
	
	
	
	
	
}