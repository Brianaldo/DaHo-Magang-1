#include "Vector.hpp"

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
    Vector2 added;
    added.elements[0] = this->elements[0] + other.elements[0];
    added.elements[1] = this->elements[1] + other.elements[1];
    return added;
}   


Vector2 Vector2::operator-(const Vector2& other){
    Vector2 substracted;
    substracted.elements[0] = this->elements[0] - other.elements[0];
    substracted.elements[1] = this->elements[1] - other.elements[1];
    return substracted;
}

bool Vector2::operator<(const Vector2& other){
    if (this->elements[0] != other.elements[0])
    {
        return this->elements[0] < other.elements[0];
    }
    else 
    {
        return this->elements[1] < other.elements[1];
    }
}

bool Vector2::operator>(const Vector2& other){
    if (this->elements[0] != other.elements[0])
    {
        return this->elements[0] > other.elements[0];
    }
    else 
    {
        return this->elements[1] > other.elements[1];
    }
}

std::ostream& operator<<(ostream& os, Vector2 vector){
    os << "<";
    os << vector.elements[0];
    os << ",";
    os << vector.elements[1];
    os << ">";
    return os;
}

std::istream& operator>>(istream& is, Vector2& vector){
    return is >> vector.elements[0] >> vector.elements[1];
}