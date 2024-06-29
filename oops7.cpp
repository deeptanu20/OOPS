// function overloading(compile time)

#include<bits/stdc++.h>
using namespace std;

class Print{

    public:
            void print(int x){
                   cout<<"Integer is "<<x<<endl;
            }

                      void print(char x){
                   cout<<"character is "<<x<<endl;
            }


};
int main(){
    Print p1;
    p1.print('a');

    return 0;
}