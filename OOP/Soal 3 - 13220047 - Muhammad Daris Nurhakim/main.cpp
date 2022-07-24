#include "WarungNasi.hpp"
#include "WarungNasgor.hpp"
#include "WarungSaltedEgg.hpp"

#include <iostream>
using namespace std;

int main(){
    int uang = 0, nasi = 25, telur = 25, kecap = 5, telurAsin = 15, ayam = 10;

    WarungNasi warungNasi(uang, nasi, telur);
    warungNasi.masak(5);
    cout << "Nasi  : " << warungNasi.getNasi() << endl;
    cout << "Telur : " << warungNasi.getTelur() << endl;
    cout << "Uang  : " << warungNasi.getUang() << endl << endl;

    WarungNasgor warungNasgor(uang, nasi, telur, kecap);
    warungNasgor.masak(5);
    cout << "Nasi  : " << warungNasgor.getNasi() << endl;
    cout << "Telur : " << warungNasgor.getTelur() << endl;
    cout << "Kecap : " << kecap << endl;
    cout << "Uang  : " << warungNasgor.getUang() << endl << endl;

    WarungSaltedEgg warungSaltedEgg(uang, nasi, telur, telurAsin, ayam);
    warungSaltedEgg.masak(5);
    cout << "Nasi  : " << warungSaltedEgg.getNasi() << endl;
    cout << "Telur : " << warungSaltedEgg.getTelur() << endl;
    cout << "Ayam  : " << ayam << endl;
    cout << "Telur Asin : " << telurAsin << endl;
    cout << "Uang  : " << warungSaltedEgg.getUang() << endl;

    return 0;
}