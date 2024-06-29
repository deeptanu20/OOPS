#include<bits/stdc++.h>
using namespace std;

class Account{

    private:
      double balance;
      string password;

      
    public:
                          // non-parameterized constructer
        // Account(){

        //     branch = "Agartala";
        // }

             // parameterized constructor

             Account(string u, string b){
                this->username=u;
                this->branch=b;

             }


         
      string accountId;
      string username;
      string branch;

      void Username(string newUsername){
        username=newUsername;
      }

      void getinfo(){
            cout<<"Username: "<<username<<" ";
            cout<<"Brach: "<<branch<<" ";
      }
    
};

int main(){
  Account a("Deeptanu","Khayerpur"); // constructor call
  
  // a.getinfo();

  Account b(a);                     //concept of copy constructor

  b.getinfo();


 

  return 0;
}