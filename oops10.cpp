// Static keyword
#include <bits/stdc++.h>
using namespace std;

int func()
{
    static int x = 0; // init statement run 1 time

    cout << "x: " << x << endl;
    x++;
}

int main()
{
    func();
    func();
    func();
    func();
    return 0;
}