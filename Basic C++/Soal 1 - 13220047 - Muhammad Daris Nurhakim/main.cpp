#include <iostream>
#include <string.h>
using namespace std;

int main(){
    int jumlahInput, n = 0;
    cin >> jumlahInput;

    char nama[jumlahInput][64];
    int umur[jumlahInput];
    while (n < jumlahInput){
        cin >> nama[n] >>umur[n];
        n += 1;
    }

    char tempNama[64];
    int tempUmur;
    //sorting nama
    for (int i = 0; i < jumlahInput - 1; i++){
        for (int j = 0; j < jumlahInput - i - 1; j++){
            if (strcmp(nama[j], nama[j+1]) > 0){
                strcpy(tempNama,nama[j]);
                tempUmur = umur[j];
                strcpy(nama[j],nama[j+1]);
                umur[j] = umur[j+1];
                strcpy(nama[j+1],tempNama);
                umur[j+1] = tempUmur;
            }
        }
    }

    //sorting umur
    for (int i = 0; i < jumlahInput - 1; i++){
        for (int j = 0; j < jumlahInput - i - 1; j++){
            if (umur[j] < umur[j+1]){
                strcpy(tempNama,nama[j]);
                tempUmur = umur[j];
                strcpy(nama[j],nama[j+1]);
                umur[j] = umur[j+1];
                strcpy(nama[j+1],tempNama);
                umur[j+1] = tempUmur;
            }
        }
    }

    cout << endl;
    n = 0;
    while (n < jumlahInput){      
        cout << nama[n] << " " << umur[n] << endl;
        n += 1;
    }
    
    return 0;
}