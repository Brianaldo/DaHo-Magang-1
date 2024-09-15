#include "bangun.hpp"

double getAreaCircle(int radius){
    return (PI * pow(radius,2));
}

double getCircumferenceCircle(int radius){
    return (2 * PI * radius);
}

double getAreaRAT(int base, int height){
    return (0.5 * base * height);
}

double getPerimeterRAT(int base, int height){
    return (base + height + sqrt(pow(height, 2) + pow(base, 2)));
}

int getAreaRectangle(int length, int width){
    return (length * width);
}

int getPerimeterRectangle(int length, int width){
    return (2*length + 2*width);
}

void printSpecBangun(string bangun){
    // Change to lowercase 
    transform(bangun.begin(), bangun.end(), bangun.begin(), ::tolower);
    if (bangun == "persegi")
    {
        int x,y;
        try {
            cout << "Panjang: ";
            cin >> x;
            cout << "Lebar: ";
            cin >> y;
            if (x < 0 || y < 0) {
                throw "Negative length and/or Negative width";
            } else {
                cout << "Luas: " << getAreaRectangle(x,y) << endl;
                cout << "Keliling: " << getPerimeterRectangle(x,y) << endl;
            }
        } catch (const char* msg) {
            cerr << "Error: " << msg << endl;
        }


    } 
    else if (bangun == "segitiga siku-siku")
    {   
        int x,y;
        try {
            cout << "Alas: ";
            cin >> x;
            cout << "Tinggi: ";
            cin >> y;
            if (x < 0 || y < 0) {
                throw "Negative base and/or Negative height";
            } else {
                cout << "Luas: " << getAreaRAT(x,y) << endl;
                cout << "Keliling: " << getPerimeterRAT(x,y) << endl;
            }
        } catch (const char* msg) {
            cerr << "Error: " << msg << endl;
        }

    } 
    else if (bangun == "lingkaran") 
    {
        int r;
        try {
            cout << "Radius: ";
            cin >> r;
            if (r < 0) {
                throw "Negative radius";
            } else {
                cout << "Luas: " << getAreaCircle(r) << endl;
                cout << "Keliling: " << getCircumferenceCircle(r) << endl;
            }
        } catch (const char* msg) {
            cerr << "Error: " << msg << endl;
        }

    } 
    else 
    {
        cout << "Invalid Bangunan Name" << endl;
        cout << bangun << endl;
    }
}