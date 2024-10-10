#include<iostream>
using namespace std;
class BankAccount{
 private:
    string name;
    double balance;
     public:
     BankAccount(string accountName, double initialBalance):name(accountName),balance(initialBalance){

     }
     void deposit( double amount){
      if(amount>0){
         balance+=amount;
         cout<<"Deposited"<<amount<<endl;
      }
     }
     void withdraw( double amount){
      if(amount<=balance){
         balance-=amount;
      }
      else{
         cout<<"Insufficient funds"<<endl;
      }

     }
     void display(){
      cout<<"Account"<<name<<endl<<"Balance:$"<<balance<<endl;
     }

    
};
int main(){
  
    string name;
    double initialDeposit;

    cout << "Enter your name: ";
      cin>>name;
    cout << "Enter initial deposit: ";
    cin >> initialDeposit;

    BankAccount account(name, initialDeposit);

    int choice;
    double amount;

    do
    {
        cout << "\n1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display Account" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter deposit amount: ";
            cin >> amount;
            account.deposit(amount);
            break;
        case 2:
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            account.withdraw(amount);
            break;
        case 3:
            account.display();
            break;
        case 4:
            break;
        default:
            cout << "Invalid choice." << endl;
        }
    } while (choice != 4);

    return 0;
}


 
