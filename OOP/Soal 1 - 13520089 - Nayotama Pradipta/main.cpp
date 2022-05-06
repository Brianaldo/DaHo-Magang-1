#include "Time.hpp"


int main(){
    // -------Constructor--------- //
    Time t0 = Time();
    Time *t1 = new Time(23, 35, 50); 
    Time t2 = Time(1, 59, 30); 
    t0.printTime();
    t1->printTime(); 
    t2.printTime();
    // ------ Copy Constructor ----- //
    Time t = Time(*t1);
    t.printTime();
    // --------Add---------- //
    Time t3 = t1->add(t2); 
    // ---------Getter-------- //
    cout << t3.getHour() << endl;
    cout << t3.getMinute() << endl;
    cout << t3.getSecond() << endl;
    t3.printTime();
    // ------- Setter ------ //
    t3.setHour(20);
    t3.setMinute(1);
    t3.setSecond(49);
    t3.printTime();
    // --------Minus-------- //
    Time t4 = t2.minus(*t1);
    t4.printTime();
    t4 = t1->minus(t2);
    t4.printTime();
    // ------ AdditionalFunctions ----- //
    cout << t4.convertToSecond() << " seconds";
    // -------------------------- //

}