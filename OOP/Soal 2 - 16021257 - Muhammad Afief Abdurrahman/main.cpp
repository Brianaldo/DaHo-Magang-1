#include "vector.hpp"

int main(){
    // Constructor
    // Default constructor
    Vector2 vectorDefault;
    // Copy constructor
    Vector2 *t1 = new Vector2();
    Vector2 vectorCopy = Vector2(*t1);

    Vector2 vector1;
    Vector2 vector2;

    // istream
    std::cout << "Vector 1" << std::endl;
    std::cin >> vector1;

    std::cout << "Vector 2" << std::endl;
    std::cin >> vector2;

    // operator subscript
    std::cout << "elemen 0: " << vector1[0] << std::endl;
    std::cout << "elemen 1: " << vector1[1] << std::endl;

    // operator tambah
    Vector2 vectorSum = vector1 + vector2;
    std::cout << vectorSum << std::endl;

    //operator kurang
    Vector2 vectorMinus = vector1 - vector2;
    std::cout << vectorMinus << std::endl;

    std::cout << "Vector 1: " << vector1 << std::endl;
    std::cout << "Vector 2: " << vector2 << std::endl;

    if(vector1>vector2 && !(vector1 < vector2)){
        std::cout << "Vector 1 lebih besar daripada vector 2" << std::endl;
    } else {
        std::cout << "Vector 1 lebih kecil daripada vector 2" << std::endl;
    }
}