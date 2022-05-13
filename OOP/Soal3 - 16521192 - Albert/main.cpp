# include "WarungNasi.hpp"
# include "WarungNasgor.hpp"
# include "WarungSaltedEgg.hpp"
# include <iostream>
# include <conio.h>
using namespace std;

int main(){
    WarungNasi nasi = WarungNasi(20000,2,4);
    WarungNasgor nasgor = WarungNasgor(30000,2,2,2);
    WarungSaltedEgg saltedEgg = WarungSaltedEgg(60000,2,2,6,2);

    while (true){
        cout << endl;
        cout << "Warung Nasi"   << endl;
        cout << "Pendapatan : " << nasi.getUang() << endl;
        cout << "Tersedia:"     << endl;
        cout << nasi.getNasi()  << " Nasi"        << endl;
        cout << nasi.getTelur() << " Telur"       << endl;

        cout << "\nWarung Nasgor"   << endl;
        cout << "Pendapatan : "   << nasgor.getUang() << endl;
        cout << "Tersedia:"       << endl;
        cout << nasgor.getNasi()  << " Nasi"          << endl;
        cout << nasgor.getTelur() << " Telur"         << endl;

        cout << "\nWarung SaltedEgg"   << endl;
        cout << "Pendapatan : "      << saltedEgg.getUang() << endl;
        cout << "Tersedia:"          << endl;
        cout << saltedEgg.getNasi()  << " Nasi"             << endl;
        cout << saltedEgg.getTelur() << " Telur"            << endl;

        int choice;
        cout << endl;
        cout << "1. Order " << endl;
        cout << "2. Exit"   << endl;
        cout << " 1 or 2 ? ";
        cin >> choice;

        while (choice != 1 and choice != 2){
            cout << "Please input a valid choice!!!" << endl;
            cout << "1 or 2 ? ", cin >> choice;
        } cout << endl;


        if (choice == 1){
            int psn_telur,psn_nasgor,psn_saltedEgg;
            cout << "Jumlah pesanan Nasi Telur : ";
            cin >> psn_telur;
            cout << "Jumlah pesanan Nasi goreng : ";
            cin >> psn_nasgor;
            cout << "Jumlah pesanan Nasi SaltedEgg : ";
            cin >> psn_saltedEgg;
            cout << endl;

            if (psn_telur > 0){
                if (nasi.masak(psn_telur)){
                    cout << "Nasi Telur berhasil dimasak." << endl;
                }
                else{
                    cout << "Bahan tidak cukup." << endl;
                }
            }
            if (psn_nasgor > 0){
                if (nasgor.masak(psn_nasgor)){
                    cout << "Nasi Goreng berhasil dimasak." << endl;
                }
                else{
                    cout << "Bahan tidak cukup." << endl;
                }
            }
            if (psn_saltedEgg > 0){
                if (saltedEgg.masak(psn_saltedEgg)){
                    cout << "Nasi SaltedEgg berhasil dimasak." << endl;
                }
                else{
                    cout << "Bahan tidak cukup." << endl;
                }
            }
        }
        else{
            break;
        }
        getch();
    }
}