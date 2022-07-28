#include <iostream>
#include "Time.hpp"
using namespace std;
int main()
{
    Time waktu(3, 4, 5);
    waktu.printTime();
    Time waktu2(1, 2, 3);
    waktu.add(waktu2);
    waktu2.printTime();
    waktu.minus(waktu2);
    waktu2.printTime();
    waktu.convertToSecond();
    cout << "Jumlah detik :"<< waktu.getSecond();
    
	} 