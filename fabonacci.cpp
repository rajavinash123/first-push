#include<iostream>
using namespace std;
int fibonacci(int){
    
}

 int main(){
    int n ,answers;
    cout<<"enter the value"<<endl;
    cin>>n;
    answers=fibonacci(n);
    cout<<"fibnacci is="<<answers;
}

int fibonacci(int n){
  
    if(n==0 )
    {
        return 0;
    }
    else if (n==1){
    return 1;
    }
    return 0;
}
