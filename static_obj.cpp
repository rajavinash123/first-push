#include<iostream>
using namespace std;

class A{
   
   public:
    int x=0;
    void incX(){
        cout<<x;
        x=x+1;
    }
};
 int main(){
     A a1;
    a1.x=0;
    a1.incX();
  cout<<a1.x;
     
     }