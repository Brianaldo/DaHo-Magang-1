#include "WarungNasi.hpp"
#include "WarungNasgor.hpp"
#include "WarungSaltedEgg.hpp"
#include <iostream>

using namespace std;


int main(){
    WarungNasi wn(10000, 10, 10);
    WarungNasgor wng(15000, 10, 20, 5);
    WarungSaltedEgg wse(30000, 10, 20, 30, 10);
    wn.masak(3);
    cout << wn.getNasi() << endl;
    cout << wn.getTelur() << endl;
    cout << wn.getUang() << endl;
    wng.masak(4);
    cout << wng.getNasi() << endl;
    cout << wng.getTelur() << endl;
    cout << wng.getUang() << endl;
    wse.masak(2);
    cout << wse.getNasi() << endl;
    cout << wse.getTelur() << endl;
    cout << wse.getUang() << endl;
    // Invalid masak 
    wn.masak(100);
    cout << wn.getNasi() << endl;
    cout << wn.getTelur() << endl;
    cout << wn.getUang() << endl;
    wng.masak(100);
    cout << wng.getNasi() << endl;
    cout << wng.getTelur() << endl;
    cout << wng.getUang() << endl;
    wse.masak(100);
    cout << wse.getNasi() << endl;
    cout << wse.getTelur() << endl;
    cout << wse.getUang() << endl;
    return 0;
}