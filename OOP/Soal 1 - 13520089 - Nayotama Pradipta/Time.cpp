#include "Time.hpp"

Time::Time(){
    this->h = 0;
    this->m = 0;
    this->s = 0;
}
Time::Time(int h, int m, int s){
    this->h = h;
    this->m = m;
    this->s = s;
}
Time::Time(const Time& other){
    this->h = other.h;
    this->m = other.m;
    this->s = other.s;
}
Time::~Time(){
    cout << "Destructor called" << endl;
}

int Time::getHour(){
    return this->h;
}

int Time::getMinute(){
    return this->m;
}

int Time::getSecond(){
    return this->s;
}

void Time::setHour(int HOUR){
    this->h = HOUR;
}
void Time::setMinute(int MINUTE){
    this->m = MINUTE;
}
void Time::setSecond(int SECOND){
    this->s = SECOND;
}

int Time::convertToSecond(){
    return (this->h * 3600 + this->m * 60 + this->s);
}
Time Time::add(Time t){
    Time *x = new Time();
    int totalSecond = this->convertToSecond() + t.convertToSecond();
    int h = totalSecond / 3600;
    int m = (totalSecond % 3600) / 60;
    int s = totalSecond % 60;
    if (h >= 24)
    {
        h -= 24;
    }
    x->h = h;
    x->m = m;
    x->s = s;
    return *x;
}
Time Time::minus(Time t){
    int SecondDiff = this->convertToSecond() - t.convertToSecond();
    if (SecondDiff < 0) 
    {
        return *this;
    }
    else
    {
        Time *x = new Time(); 
        int h = SecondDiff / 3600;
        int m = (SecondDiff % 3600) / 60;
        int s = SecondDiff % 60;
        x->h = h;
        x->m = m;
        x->s = s;
        return *x;
    }
}
void Time::printTime(){
    if (this->h <= 9)
    {
        cout << 0;
    }
    cout << this->h << ":";
    if (this->m <= 9)
    {
        cout << 0;
    }
    cout << this->m << ":";
    if (this->s <= 9)
    {
        cout << 0;
    }
    cout << this->s << endl;
}