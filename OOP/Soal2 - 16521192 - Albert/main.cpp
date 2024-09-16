# include "vector.hpp"

int main(){
    Vector2 v = Vector2();          // Default constructor
    Vector2 u = Vector2();
    cout << "v1 : ", cin >> v;
    Vector2 v1 = Vector2(v);        // Copy Constructor
    cout << "v2 : ", cin >> u;
    Vector2 v2 = Vector2(u);
    cout << endl;

    int choice;
    while (true){
        cout << "1. Add Vectors"                << endl;
        cout << "2. Subtract Vectors"           << endl;
        cout << "3. Compare Vectors ( < or > )" << endl;
        cout << "4. Exit"                       << endl;
        cout << "Choice ? ", cin >> choice;

        while (choice != 1 and choice != 2 and choice != 3 and choice != 4){
            cout << "Please input a valid choice!!!" << endl;
            cout << "Choice ? ", cin >> choice;
        } cout << endl;

        // Add Vectors
        if (choice == 1){
            Vector2 v3 = v1 + v2;
            cout << "[" << v1[0] << "]";
            cout << " + ";
            cout << "[" << v2[0] << "]";
            cout << " = ";
            cout << "[" << v3[0] << "]";
            cout << endl;
            cout << "[" << v1[1] << "]";
            cout << "   ";
            cout << "[" << v2[1] << "]";
            cout << "   ";
            cout << "[" << v3[1] << "]";
            cout << endl;
            cout << v1 << " + " << v2 << " = " << v3 << endl;
        }

        // Subtract Vectors
        else if (choice == 2){
            Vector2 v4 = v1 - v2;
            cout << "[" << v1[0] << "]";
            cout << " - ";
            cout << "[" << v2[0] << "]";
            cout << " = ";
            cout << "[" << v4[0] << "]";
            cout << endl;
            cout << "[" << v1[1] << "]";
            cout << "   ";
            cout << "[" << v2[1] << "]";
            cout << "   ";
            cout << "[" << v4[1] << "]";
            cout << endl;
            cout << v1 << " - " << v2 << " = " << v4 << endl;
        }

        else if (choice == 3){
            // Less than
            if (v1 < v2){
                cout << "v1 is less than v2" << endl;
            }
            // more than
            else if (v1 > v2){
                cout << "v1 is more than v2" << endl;
            }
            else{
                cout << "v1 is same as v2"  << endl;
            }
        }

        // exit
        else{
            break;
        }
        cout << endl;
    }
}