#include<iostream>
using namespace std;
 
 class shap{
  virtual void drow()=0;
    

 };

 class circle :public shap {
    public:
    void drow(){
        cout<<"drowing ic circle"<<endl;
        
    }
};


 int main(){
    circle c1;
    c1.drow();
    return 0;
 }