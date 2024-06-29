#include <bits/stdc++.h>
using namespace std;

class College
{

private:
    string code;

public:
    string name;
    string location;
    int rank;
    string *type;

    College(string l, string t) // constructor
    {
        cout << "Created Constructor\n";
        this->location = l;
        type = new string;
        *type = t;
    }

    College(College &obj)
    { // copy constructor
        this->location = obj.location;
        this->type = obj.type;
    }

    ~College()
    { // destructor
        cout << "Hi I delete Everything\n";
        delete type; // for dynamically allocated object we have to write "delete" key .
    }

    void getinfo()
    {
        cout << "Location: " << location << endl;
        cout << "Type: " << *type << endl;
    }
};
int main()
{

    College c("Ranirbazar", "Engineering");

    // College c1(c);

    // c1.location="Agartala";
    // *c1.type="BSC";

    // c1.getinfo();

    // cout<<endl;

    c.getinfo();

    return 0;
}