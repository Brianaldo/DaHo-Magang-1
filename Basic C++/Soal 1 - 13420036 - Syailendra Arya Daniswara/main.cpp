#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int Jml_Input;
	cout << "Masukkan Jumlah Data:";
	cin >> Jml_Input;
	
	int Nilai[Jml_Input];
	string Nama[Jml_Input];
	
	for(int i = 0; i < Jml_Input; i+=1){
		cout << "Masukkan nama " << i+1 << " :";
		cin >>Nama[i];
		cout << "Masukkan Umur "<< i+1 << " :";
		cin >> Nilai[i];
	}
	
	string ascendnama;
	int ascendnilai;
	char gantinama;
	int x;
	int y;
	int z;
	int a;
	int b;
	
	for (x=1;x<=Jml_Input;x++){
		for(y=x;y<Jml_Input;y++){
			for(z=0;z<1000;z++){
				if(Nama[x-z][z]<Nama[y][z]){
					break;
				}else if(Nama[x-z][z]>Nama[y][z]){
					ascendnama=Nama[x-z];
					ascendnilai=Nilai[x-z];
			 		Nama[x-z]=Nama[y];
					Nilai[x-z]=Nilai[y];
					Nama[y]=ascendnama;
					Nilai[y]=ascendnilai;
				}
			}
		}
	}
	  	
	for(int c=1; c<Jml_Input; c++){
			for(int d=0;d<Jml_Input-c;d++){
				if(Nilai[d]<Nilai[d+1])
			{
				ascendnilai=Nilai[d];
				ascendnama=Nama[d];
				Nilai[d]=Nilai[d+1];
				Nama[d]=Nama[d+1];
				Nilai[d+1]=ascendnilai;
				Nama[d+1]=ascendnama;
			}
		}
	}
	

	for(int j = 0; j < Jml_Input; j+=1){
	 	cout << Nama[j]<< " ";
	 	cout << Nilai[j]<< endl;

	}
	return 0;
}
