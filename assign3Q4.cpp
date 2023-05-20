#include <iostream>
using namespace std; 

class Time{
    private: 
    int hours, minutes , seconds; 
    public: 
    Time(): hours(0), minutes(0), seconds(0){}; 
    Time(int hou, int min, int sec){
        hours =hou ;
        minutes = min; 
        seconds = sec;  
    }; 
    void displayFormat() const {
        cout<<"\nTime is: "<<hours<<":"<<minutes<<":"<<seconds<<endl; 
    }; 
    Time add(Time t){
        cout<<" Addding \n"; 
        int Thours, Tminutes, Tseconds; 
        Thours = hours + t.hours; 
        Tminutes = minutes + t.minutes; 
        Tseconds = seconds + t.seconds ; 
        if(Tseconds>=60){
             Tseconds -=60; 
             Tminutes++; 
        }
        if(Tminutes>=60){
            Tminutes -=60; 
            Thours++; 
        }
     return Time(Thours, Tminutes , Tseconds); 

    }; 
}; 
int main(){
    Time t1(12, 39, 12); 
    Time t2(16, 60, 59); 
    Time t3; 
    t1.displayFormat(); 
    t2.displayFormat(); 
    t3 = t1.add(t2); 
    t3.displayFormat(); 
}