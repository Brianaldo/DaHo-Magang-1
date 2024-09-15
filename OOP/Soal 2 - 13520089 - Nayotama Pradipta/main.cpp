#include "Vector.hpp"


int main() {
    Vector2 v0; // Default Constructor
    Vector2 v1 = Vector2(v0); // Copy Constructor 
    cout << v0 << " " << v1 << endl; // Overloading operator << output 
    cin >> v0; // Overloading operator >> input 
    cout << v0 << endl; // Overloading operator << output
    cin >> v1; // Overloading operator >> input
    cout << v1 << endl; // Overloading operator << output
    
    Vector2 v2 = v0 + v1; // Addition 
    cout << v2[0] << endl; // Subscript
    cout << v2[1] << endl; // Subscript
    cout << v2 << endl; // Overloading operator << output 

    Vector2 v3 = v0 - v1; // Substraction 
    cout << v3[0] << endl; // Subscript 
    cout << v3[1] << endl; // Subscript 
    cout << v3 << endl; // Overloading operator << output 

    if (v2 > v3) { // Operator more than
        cout << "v2 is greater than v3" << endl;
    }
    if (v3 < v2) { // Operator less than
        cout << "v3 is less than v2" << endl;
    }
    return 0;
}