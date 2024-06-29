#include <bits/stdc++.h>
using namespace std;

class Teacher
{

private:
     double salary;

public:
    string name;
    string dept;
    string subject;
    
   

    

    void ChangeDept(string newDept)
    {
        dept = newDept;
    }

    void setSalary(double s){      //setter function

        salary=s;
    }

    int getSalary(){                 //getter function 
        return salary;
    }


};

int main()
{
    Teacher t1; // create object

    t1.name = "Deeptanu";
    t1.dept = "Electrical";
    t1.subject = "oops";
    t1.setSalary(25000);
 

    cout << t1.name << endl;
    cout << t1.subject<< endl;

    cout<<t1.getSalary()<<endl;
 

    return 0;
}