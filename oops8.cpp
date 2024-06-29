// function overriding
#include<bits/stdc++.h>
using namespace std;

class Parent{

    public:
          void getinfo(){
            cout<<"Parent Class\n";
          }

       virtual void hello(){                       //virtual function
             cout<<"Hello from parent class "<<endl;
        }

};
class Child: public Parent{

    public:
          void getinfo(){
            cout<<"Child Class\n";
          }

          void hello(){      //virtual function
             cout<<"Hello from child class "<<endl;
        }

};

int main(){
    Child c1;
    c1.hello();
    return 0;
}