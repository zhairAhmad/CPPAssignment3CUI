#include <iostream>
using namespace std; 
class Int{
  private: 
   int value; 
  public: 
  Int(): value(0){}; 
  Int(int value): value(value){}; 
  int display()const {
    return value; 
  }
  Int operator +(Int a){
    return Int(value + a.value); 
  }
  Int operator -(Int a){
    return Int(value + a.value); 
  }
  Int operator ++(){
    return Int(value++); 
  }
  Int operator --(){
    return Int(value++); 
  }
  Int operator ++(int){
    return Int(value++); 
  }
  Int operator --(int){
    return Int(value++); 
  }
  Int operator /(Int a){
    return Int((float)value/a.value); 
  }
  Int operator *(Int a){
    
    return Int((float)value*a.value); 
  }
}; 
int main(){
  Int uninitializad; 
  Int a(3);
  Int b(8);  
   cout<< "a ="<<a.display() <<endl ; 
   cout<< "b = "<<b.display()<<endl; 
  uninitializad = a +b; 
  cout<<"The Result of a+b = "<<uninitializad.display()<<endl; 

}