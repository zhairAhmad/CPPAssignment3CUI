#include <iostream>
#include <conio.h> 
using namespace std; 
class toolboth{
 private: 
 unsigned int totalCars; 
 double totalMoney; 
 public: 
 toolboth(): totalCars(0), totalMoney(0){}
 void payingCars(){
    cout<<"Car is passed and Paid the tooltax of 0.50\n "; 
    totalCars +=1; 
    totalMoney += 0.50; 
 }
 void noPayCar(){
    cout<<"Car passed without paying the tooltax \n"; 
    totalCars +=1; 
 }

 void display() const{
    cout<<"\n================\nThe Total Data Is: "<<endl; 
    cout<<"Total Cars: "<<totalCars<<endl; 
    cout<<"MOney Collected: "<<totalMoney<<endl; 
 }
}; 
int main(){
    toolboth data; 
 char input;
cout<<" Press p for paying cars \n Press n for paying car \n Press ESc to exit and show data \n"; 
 do{
    cout<<"Input "; 
    input = _getch();
    cout<<input<<" "; 
   switch (input)
   {
   case 'p':
    data.payingCars(); 
    break;
   case 'n': 
   data.noPayCar(); 
   break;
   case 27: 
   data.display(); 
   cout<<"Existing....\n"; 
   break;
   default:
   cout<<"Invalid Input \n"; 
    break;
   }
 } while(input !=27);

}