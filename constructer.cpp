// #include<iostream>
// using namespace std;
// class Techer{
//     public:
//    string name;
//    int age;

   
// };
// int main()
// {
//     Techer t1;
//     t1.age=26;
//     t1.name="At";
//     cout<<t1.name<<endl;
//     cout<<t1.age<<endl;

// }


//constructer  types  



// #include<iostream>
// using namespace std;
// class Teacher{
//     public:
//     string name;
//     string  dept;
//     string subject;

//    Teacher(){ // non parametrerise  constucter
//         cout<<"Hi, class student";

//     }
// };
    
//      int main(){
//     Teacher t1;
//     Teacher t2;// constucter call
//     t1.name="Avinash kumar";
//     t1.dept="cse";
//     t1.subject="math";
//     cout<<t1.subject<<endl;
//      cout<<t1.dept<<endl;
//     return 0;
//      }


// parameterise constucter

#include <iostream>
#include <cstring>
using namespace std;

class Student {
    int rollNo;
  string name; 
    double fee;

public:
    // Parameterized constructor
    Student(int r,string n, double f) {
        rollNo = r;
        name =n;
        fee = f;
    }

    void display() {
        cout << rollNo << "\t" << name << "\t" << fee << endl;
    }
};

int main() {
    // Creating an object using the parameterized constructor
    Student s(1001, "Ram", 10000);
    s.display();
    return 0;
}
