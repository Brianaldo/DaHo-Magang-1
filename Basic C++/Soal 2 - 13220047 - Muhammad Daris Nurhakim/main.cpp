#include <iostream>
#include <cmath>
using namespace std;

int main(){
    string bangunDatar;
    cout << "Bangun datar : ";
    getline(cin,bangunDatar);
    
    if (bangunDatar == "Persegi" || bangunDatar == "persegi"){
        int panjang, lebar, luas, keliling;
        cout << "panjang : "; cin >> panjang;
        cout << "lebar : "; cin >> lebar;

        luas = panjang * lebar;
        cout << "\nluas : " << luas << endl;
        keliling = 2 * (panjang + lebar);
        cout << "keliling : " << keliling << endl;
    }
    else if (bangunDatar == "Lingkaran" || bangunDatar == "lingkaran"){
        float r, pi = 3.14,luas, keliling;
        cout << "jari-jari : "; cin >> r;

        luas = pi * pow(r,2);
        cout << "\nluas : " << luas << endl;
        keliling = 2 * pi * r;
        cout << "keliling : " << keliling << endl;
    }
    else if(bangunDatar == "Segitiga siku-siku" || bangunDatar == "segitiga siku-siku"){
        float tinggi, alas, luas, keliling;
        cout << "tinggi: "; cin >> tinggi;
        cout << "alas : "; cin >> alas;

        luas = (tinggi * alas) / 2;
        cout << "\nluas : " << float(luas) << endl;
        keliling = tinggi + alas + sqrt(pow(tinggi,2)+pow(alas,2));
        cout << "keliling : " << keliling << endl;
    }
    else{
        cout << "Bangun datar tidak tersedia." << endl;
    }

    return 0;
}