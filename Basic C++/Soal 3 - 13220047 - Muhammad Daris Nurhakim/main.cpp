#include <iostream>
using namespace std;

int main(){
    int jumlahBilangan;

    cin >> jumlahBilangan;

    while (jumlahBilangan < 1){
        cout << "Input angka positif" << endl;
        cin >> jumlahBilangan;
    }

    int deret[jumlahBilangan];
    for(int i = 0; i < jumlahBilangan; i++){
        deret[0] = 1;
        deret[1] = 1;
        if (i > 1){
            deret[i] = deret[i-1] + deret[i-2];
        }
        cout << deret[i] << " ";
    }

    return 0;
}