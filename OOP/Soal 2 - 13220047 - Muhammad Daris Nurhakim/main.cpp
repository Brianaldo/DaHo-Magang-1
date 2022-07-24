#include "Vector.hpp"

int main(){
    Vector2 vectorA, vectorB;
    cout << "VectorA : " << endl;operator>>(cin, vectorA);
    cout << "VectorB : " << endl;operator>>(cin, vectorB);

    Vector2 vectorTambah = vectorA.operator+(vectorB);
    cout << "vectorTambah : ";
    operator<<(cout, vectorTambah);

    Vector2 vectorKurang = vectorA.operator-(vectorB);
    cout << "vectorKurang : ";
    operator<<(cout, vectorKurang);

    bool vectorLess = vectorA.operator<(vectorB);
    cout << "vectorLess : ";
    if (vectorLess == 1){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

    bool vectorMore = vectorA.operator>(vectorB);
    cout << "vectorMore : ";
    if (vectorMore == 1){
        cout << "True" << endl;
    }
    else{
        cout << "False" << endl;
    }

    return 0;
}