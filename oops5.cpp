// multiple inheritance

#include <bits/stdc++.h>
using namespace std;

class Person
{
private:
  string accountId;

public:
  string name;
  int age;
};

class Student : public Person
{

public:
  int roll;
};

class GradStudent : public Student
{

public:
  string researchArea;

  void getinfo()
  {
    cout << "Name is: " << name << endl;
    cout << "Research Area is: " << researchArea << endl;
  }
};

int main()
{
  GradStudent s1;
  s1.name = "Deeptanu Bhatta";
  s1.age = 21;
  s1.roll = 34;
  s1.researchArea = "OOPS";

  s1.getinfo();
  cout << s1.age << endl;

  return 0;
}