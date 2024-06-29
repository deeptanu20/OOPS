// abstraction
#include <bits/stdc++.h>
using namespace std;

class Shape
{ // absract class (only blue of obj)

public:
    virtual void draw() = 0; // pure virtual func
};

class Circle : public Shape
{

public:
    void draw()
    {
        cout << "Draw a circle \n";
    }
};
int main()
{
    Circle c1;
    c1.draw();
    return 0;
}