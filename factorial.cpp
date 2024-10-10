#include<iostream>
using namespace std;
int fact(int n)
{
int fact;
if(n==0 ||n==1){
    return 1;
}
else{
    fact=n*(fact-1);
    return fact;
}
   
    
}
int main(){
    int n;
    cout<<"Enter the no:";
    cin>>n;
   int ans=fact(n);
    cout<<"factorial is:"<<ans;

}
