# include <iostream>
# include <string>
# include <math.h>

using namespace std;

int main(){
    string bgn_dtr;
    float luas,keliling;

    cout << "Input:" << endl;
    cout << "Bangun datar : ";
    getline(cin , bgn_dtr);

    if (bgn_dtr == "persegi"){
        float p,l;
        cout << "panjang : ";
        cin >> p;
        cout << "Lebar : ";
        cin >> l;

        luas = p * l;
        keliling = 2 * (p + l);
    }

    else if (bgn_dtr == "lingkaran"){
        float r;
        cout << "jari-jari : ";
        cin >> r;

        luas = 22 * pow(r,2) / 7;
        keliling = 2 * 22 * r / 7;
    }

    else if (bgn_dtr == "segitiga siku-siku"){
        float a,t,m;
        cout << "alas : ";
        cin >> a;
        cout << "tinggi : ";
        cin >> t;

        m = sqrt(pow(a,2) + pow(t,2)); // m = sisi miring

        luas = a * t / 2;
        keliling = a + t + m;
    }

    cout << "\n\nOutput:" << endl;
    printf("luas : %.2f",luas);             // pembulatan 2 angka di belakang koma
    printf("\nkeliling : %.2f",keliling);   // pembulatan 2 angka di belakang koma
}
