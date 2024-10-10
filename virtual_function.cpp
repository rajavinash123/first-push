#include<iostream>
using namespace std;

class parent {
    public:
    void getInfo(){
        cout<<"patrent class";
    }
    virtual void hello(){
        cout<<"hello from parent";
    }

};
   class child:public parent{
  void  grtInfo(){
   cout<<"child class";
 }
 virtual void hello(){
    cout<<"hello from child";
 }


};
int main(){
  
    parent p1;
    p1.hello();
    p1.getInfo();
    return 0;
}