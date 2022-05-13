#include "Vector.hpp"



// Constructor
Vector2::Vector2(){
	this -> elements = new int[2];
	this -> elements[0] = 0;
	this -> elements[1] = 0;
}

Vector2::Vector2(const Vector2& other){
	this -> elements = new int[2];
	this -> elements[0] = other.elements[0];
	this -> elements[1] = other.elements[1];
	
}

Vector2::~Vector2(){
	delete[] this -> elements;
}

int& Vector2::operator[](int idx){
	return this->elements[idx];
}

Vector2 Vector2::operator+(const Vector2& other){

	Vector2 Jumlah;
	Jumlah.elements[0] = this -> elements[0] + other.elements[0];
	Jumlah.elements[1] = this -> elements[1] + other.elements[1];
	return Jumlah;
}

Vector2 Vector2::operator-(const Vector2& other){
	Vector2 Kurang;
	Kurang.elements[0]=this-> elements[0]- other.elements[0];
	Kurang.elements[1]= this-> elements[1]- other.elements[1];
	return Kurang;
}

bool Vector2::operator<(const Vector2& other){
	if(this->elements[0]<other.elements[0]){
		return true;
	}else if(this->elements[0]== other.elements[0]){
		if(this->elements[1]<other.elements[1]){
			return true;
		}else{
			return false;
		}
	}else{
		return false;
	} 
}

bool Vector2::operator>(const Vector2& other){
	if(this->elements[0]>other.elements[0]){
		return true;
	}else if(this->elements[0]== other.elements[0]){
		if(this->elements[1]>other.elements[1]){
			return true;
		}else{
			return false;
		}
	}else{
		return false;
	} 
}


std::ostream& operator<<(ostream& os, Vector2 vector){
	os << "<" << vector.elements[0] << "," << vector.elements[1] << ">";
	return os;
}

std::istream& operator>>(istream& is, Vector2& vector){
	is >> vector.elements[0];
	is >> vector.elements[1];
	return is;
}

	