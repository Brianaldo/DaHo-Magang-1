#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
string Bangun;
float Luas;
float Keliling;

cout << "Bangun Datar: ";
cin >> Bangun;

if(Bangun == "persegi"){
	float panjang;
	float lebar;
	cout << "panjang :";
	cin >> panjang;
	cout << "lebar :";
	cin >> lebar;
	cout << "Luas : "<< panjang*lebar<< endl;
	cout << "Keliling :"<< 2*(panjang+lebar);
}else if(Bangun == "segitigasiku-siku"){
	float tinggi;
	float alas;
	cout << "tinggi : ";
	cin >> tinggi;
	cout << "alas : ";
	cin >> alas;
	cout << "Luas :"<< (alas*tinggi)/2 << endl;
	cout << "Keliling : "<< sqrt((alas*alas)+(tinggi*tinggi))+alas+tinggi;
}else if(Bangun == "lingkaran"){
	float jari;
	cout << "jari-jari: ";
	cin >> jari;
	cout << "Luas : "<< 22*jari*jari/7<<endl;
	cout << "Keliling : "<< 22*2*jari/7;
}else{
	cout << "Bangun Datar belum dimasukkan ke program :(";
}
return 0;
}
