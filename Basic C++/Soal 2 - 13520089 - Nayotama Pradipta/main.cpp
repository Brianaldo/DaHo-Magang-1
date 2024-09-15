#include "bangun.hpp"
// Asumsi input spesifikasi bangunan adalah dalam bentuk integer 
int main(){
    string bangunan;
    cout << "Bangunan datar: ";
    getline(cin, bangunan);
    printSpecBangun(bangunan);
    return 0;
}