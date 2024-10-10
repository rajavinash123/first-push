// #include<iostream>
// using namespace std;
//  class addittion{
//     int a,b,c;
//     public:
//     int input(){
//         cout<<"enter the  two number";
//         cin>>a>>b;
//     }
//     int output(){
//         c=a+b;
//         cout<<c;
//     }
//  };
//  int main(){
//     addittion a1;
//    a1.input();
//    a1.output();

//     return 0;
//  }


// outside the class 

#include<iostream>
using namespace std;
class addition{
    int a,b,c;
    public:
    int input();
    int output();


};

int addition::input(){
    cout<<"enter the two no:";
    cin>>a>>b;
}
int addition::output(){
    c=a+b;
    cout<<"output is c:"<<endl<<c;
}
int main(){
    addition a1;
    a1.input();
    a1.output();
    return 0;
}