#include "Vector.hpp"

// Default Constructor
Vector2::Vector2(){
    this->elements = new int[2];
    this->elements[0] = 0;
    this->elements[1] = 0;
}

Vector2::Vector2(const Vector2& other){
    this->elements = new int[2];
    this->elements[0] = other.elements[0];
    this->elements[1] = other.elements[1];
}

Vector2::~Vector2(){
    delete[] this->elements;
}

int& Vector2::operator[](int idx){
    return this->elements[idx];
}

Vector2 Vector2::operator+(const Vector2& other){
    Vector2 newVec;
    newVec.elements[0] = this->elements[0] + other.elements[0];
    newVec.elements[1] = this->elements[1] + other.elements[1];
    return newVec;
}

Vector2 Vector2::operator-(const Vector2& other){
    Vector2 newVec;
    newVec.elements[0] = this->elements[0] - other.elements[0];
    newVec.elements[1] = this->elements[1] - other.elements[1];
    return newVec;
}

bool Vector2::operator<(const Vector2& other){
    if(this->elements[0] != other.elements[0]){
        return this->elements[0] < other.elements[0];
    } else {
        return this->elements[1] < other.elements[1];
    }
}

bool Vector2::operator>(const Vector2& other){
    if(this->elements[0] != other.elements[0]){
        return this->elements[0] > other.elements[0];
    } else {
        return this->elements[1] > other.elements[1];
    }
}

std::ostream& operator<<(std::ostream& os, Vector2 vector){
    os << '<' << vector.elements[0] << ',' << vector.elements[1] << '>';
    return os;
}

std::istream& operator>>(std::istream& is, Vector2& vector){
	is >> vector.elements[0] >> vector.elements[1];
	return is;
}