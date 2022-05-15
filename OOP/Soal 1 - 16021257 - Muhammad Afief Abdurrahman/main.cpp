#include<iostream>
#include "Time.hpp"

int main(){
    //constructor

    //default constructor
    Time tDefault = Time();
    //parameterized constructor
    Time tParameterized = Time(1, 20, 39);
    //copy constructor
    Time *t1 = new Time(23,59,59);
    Time tCopy = Time(*t1);

    tDefault.printTime();
    tParameterized.printTime();
    tCopy.printTime();

    //methods
    std::cout << tParameterized.getHour() << std::endl;
    std::cout << tParameterized.getMinute() << std::endl;
    std::cout << tParameterized.getSecond() << std::endl;

    //mengganti tDefault menjadi 01:24:38 dari 00:00:00
    tDefault.setHour(1);
    tDefault.setMinute(24);
    tDefault.setSecond(38);
    tDefault.printTime();

    //konversi ke detik
    std::cout << tDefault.convertToSecond() << std::endl;

    //add time
    Time t2 = tDefault.add(tParameterized);
    t2.printTime();

    //minus time
    Time t3 = tDefault.minus(tParameterized);
    Time t4 = tParameterized.minus(tDefault);
    t3.printTime();
    t4.printTime();

    return 0;
}