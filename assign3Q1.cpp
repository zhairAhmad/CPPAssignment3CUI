#include <iostream>
using namespace std; 
class bank{
    private: 
    string name; 
    string accountNumber; 
    string type; 
    float balance; 

    public: 
    bank(): name("N/A"), accountNumber("1********"), type("Saving"), balance(0){};
    bank(string name, string number, string type, int balance): name(name), accountNumber(number), type(type), balance(balance){};

    void deposit(int amount){
       cout<<"The Amount that you want to Deposit is : "<<amount<<endl; 
        if(amount >= 0){
        balance +=  amount; 
         cout<<"Amount deposited successfully\n"; 
        } else {
            cout<<"Invalid Amount \n"<<endl; 
        }

    }
  void withdraw( int amount){
       cout<<"The Amount that you want to Withdraw is : "<<amount<<endl;
       if(amount <= balance){
          balance -= amount; 
          cout<<"Payment Withdrawn Successfully"; 
       }
  }

  void displayInfo(){
    cout<<" \n---Displaying Account Info "<<endl; 
    cout<<"Name: "<<name<<endl;
    cout<<"Balance: "<<balance;  
  }
}; 
int main(){
    bank A1("Zhair", "1333333", "Saving ", 2000);
    A1.deposit(300); 
    A1.withdraw(1000);
    A1.displayInfo();   

}