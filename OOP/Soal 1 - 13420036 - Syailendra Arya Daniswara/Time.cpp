#include "Time.hpp"


// Constructors

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
Time::~Time();                    // Destruktor

// METHOD

int Time::getHour(){
    return this -> h;
}              // Mengembalikan nilai atribut h
int Time::getMinute(){
    return this -> m;
}
int Time::getSecond(){
    return this ->s;
}

void Time::setHour(int HOUR){  // assign nilai atribut h dengan HOUR
    this->h = HOUR;
}      
void setMinute(int MINUTE){
    this->m = MINUTE;
}     
void setSecond(int SECOND){
    this->s = SECOND;
}
int convertToSecond(){
    return(this->s  + (this -> h*60*60) +(this->m*60));	    	
}
    	
    
        
        // Return penjumlahan dua objek jam, yaitu *this* dan t.
        // Apabila hasil penjumlahan melebihi 23:59:59, maka Anda harus mengonversinya seperti tampilan jam digital asli.
        // Contoh : 24:00:00 dituliskan 00:00:00, 25:00:00 dituliskan 01:00:00, dst.
Time add(Time t){
	Time *a = new Time();
	int SumSecond = this->convertToSecond() + t.convertToSecond();
	int h = SumSecond % 3600;
	int m = SumSecond - (h*3600);
	int s = SumSecond - (h*3600)-(m*60);
	while(h >=24){
		h = h - 24;
	}
	a -> h = h;
	a -> m = m;
	a -> s = s;
	
	return *a;
}
        	


        // Return selisih antara dua objek jam, yaitu *this* dan t.
        // Perhitungan selisih hanya dapat dilakukan jika objek ruas kiri lebih akhir dari atau sama dengan objek ruas kanan.
        // Jika objek ruas kiri lebih awal, maka kembalikan nilai objek ruas kiri.
        // Contoh: 00:00:01 - 00:00:02 = 00:00:01
Time minus(Time t){

	int SubsSecond = this->convertToSecond - t.convertToSecond()
	Time *b = new Time();
	if(SubsSecond < 0){
		return *this
	}else{
	int h = SumSecond % 3600;
	int m = SumSecond - (h*3600);
	int s = SumSecond - (h*3600)-(m*60);
	a -> h = h;
	a -> m = m;
	a -> s = s;
	
	return *b;
	}
}

		
        
Time::void printTime(){
    if(h>=10){
        cout  << h << ":";
	}else{
		cout  << "0" << h << ":";
	}
    if (m>=10){
    	cout  << m << ":";
	}else{
		cout  << "0" << m << ":";
	}
    if (s>=10){
        cout  << s << ":";
	}else{
		cout  << "0" << s << ":";
	}  
}
		
	