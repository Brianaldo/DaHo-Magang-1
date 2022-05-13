#include "Time.hpp"
# include <iostream>

using namespace std;

int main(){
    Time t0 = Time();                   // Default Constructor
    int h,m,s;
    cout << "h : ", cin >> h;
    cout << "m : ", cin >> m;
    cout << "s : ", cin >> s;
    Time t = Time(h, m, s);         // User Defined Constructor
    cout << "t : ";
    t.printTime();
    Time t1 = Time(1, 59, 30);          

    // GETTER
    cout << "\n\nt1 : ";
    t1.printTime();         
    cout << "\nhour : " << t1.getHour() << endl;   
    cout << "minute : " << t1.getMinute() << endl;
    cout << "second : " << t1.getSecond() << endl;

    // SETTER
    cout << "\ninitial t0 : ";
    t0.printTime();
    cout << endl;
    t0.setHour(15);
    t0.setMinute(10);
    t0.setSecond(03);
    cout << "t0 after set : ";
    t0.printTime();
    cout << endl;
    cout << endl;

    // ADD
    Time t2 = t.add(t1);  
    t.printTime();
    cout << "  +  ";
    t1.printTime();
    cout << "  =  ";
    t2.printTime();
    cout << endl;
    cout << endl; 

    // MINUS
    Time t3 = t.minus(t1);
    t.printTime();
    cout << "  -  ";
    t1.printTime();
    cout << "  =  ";
    t3.printTime();
    cout << endl;
    cout << endl; 

    t3 = t1.minus(t);
    t1.printTime();
    cout << "  -  ";
    t.printTime();
    cout << "  =  ";
    t3.printTime();
    cout << endl;
    cout << endl; 

    // CONVERT TO SECOND
    t2.printTime();
    cout << " = " << t2.convertToSecond() << " seconds" << endl;
}