#include "Vector.hpp"
#include <iostream>

using namespace std;


int main(){
	Vector2 Vector;
	Vector2 Vector1 =  Vector;
	Vector2 Vector3 = Vector+Vector1;
	Vector2 Vector4 = Vector-Vector1;
	if(Vector4 < Vector3){
		cout<<"True";
	}else if(Vector4 > Vector3){
	
		cout<<"False";
	}else{
		cout<<"Zero";
	}
	cout<<"Masukkan Input";
	Vector2 Vector5;
	cin >> Vector5;
}
