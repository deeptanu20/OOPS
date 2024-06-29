// Polymorphism
#include<bits/stdc++.h>
using namespace std;
class Teacher{
    public:
             string name;

       Teacher(){
        cout<<"non-parameterized\n";
       }  

       Teacher(string n)  {
        this->name=n;
        cout<<"Parameterized\n";
       }  

};



int main(){
    Teacher t1("Rahul");
    cout<<t1.name<<endl;
 return 0;
}