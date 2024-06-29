// single inheritance

#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
           string name;
           int age;

    //  Person(string name,int age){
    //     this->name=name;
    //     this->age=age;
    //  }  

        Person(){
           cout<<"Parent Constructor "<<endl;
        }    

};

class Student : public Person{

    //name,age,rollno
    public:
          int roll;

          Student(){
            cout<<"derived constructor "<<endl;
          }

          void getinfo(){
            cout<<"Name is: "<<name<<endl;
            cout<<"Age is: "<<age<<endl;
            cout<<"Roll is: "<<roll<<endl;
          }

};

int main(){
    Student s1;
    s1.name="Deeptanu";
    s1.age=21;
    s1.roll=34;

    s1.getinfo();
  
   return 0; 
}