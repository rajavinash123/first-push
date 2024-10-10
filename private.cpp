#include<iostream>
using namespace std;
class student{
    private:
    double salary;
      public:
    string name;
    int age;
     student(){
    cout<<"hi Avinash"<<endl;
    }
//setter
    void  setSalary(double s){
        salary=s;
    }//getter
    double getsalary(){
        return salary;
    }

};

int main(){
    student s1;//constructer call
    s1.setSalary(2500);
    cout<<s1.getsalary()<<"";
   

}