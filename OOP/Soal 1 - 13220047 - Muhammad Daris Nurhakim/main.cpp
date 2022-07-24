#include "Time.hpp"

int main(){
    Time time1(5,45,20);
    time1.printTime();
    Time time2(3,50,31);
    time2.printTime();

    cout << "add   : ";time1.add(time2).printTime();
    cout << "minus : ";time1.minus(time2).printTime();

    return 0;
}