#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    cout<<"CONSTANTS, MANUPLATIORS & OPERATORS PRESEDENCE"<<endl;

    // ---------------------- CONSTANTS IN C++ ------------------------------------

    int a=10; //defining a changeable container
    cout <<"\nValue of a = "<<a;

    a=100;  //Changed a
    cout <<"\nChanged Value of a = "<<a;

    //Now if don't want the declared varibable 'with an value' to changed we use "const" keyword to before declaring the VARIABLE .

    const int b=10;
    cout <<"\n\nConstant Value of b = "<<b;
    // b=100;
    // This will Show error by IDE b'cause now b is an constant value.
    
    const float pi=3.1415;
    cout <<"\nValue of Pi = "<<pi;
    const int MAX_USERS = 100;
    cout<<"\nMax no of users = "<<MAX_USERS<<endl<<endl;


    // ---------------------- MANIPULATORS IN C++ ---------------------------------


    //Manipulators are used to format the input/output data on Display.
    //They are commonly used with the cin and cout objects.
    //Eg: endl,setw(),setprecision(),left,right ......etc
    //Include iomanip lib to use these manipulators

    cout<<"123456789"<<endl;
    //endl:Inserts a new line for next code.

    cout<<"VALUE OF PI = "<<setw(4)<<pi<<endl;
    // setw(): Sets the width of the output.

    int x=4,y=10,z=1203;

    cout<<"The value of without setw() x: "<<x<<endl;
    cout<<"The value of without setw() y: "<<y<<endl;
    cout<<"The value of without setw() z: "<<z<<endl<<endl;

    cout<<"The value of with setw() x: "<<setw(4)<<x<<endl;
    cout<<"The value of with setw() y: "<<setw(4)<<y<<endl;
    cout<<"The value of with setw() z: "<<setw(4)<<z<<endl;

    cout<< right <<setw(41)<<"~~~~ HI ~~~~"<<endl;     
    // right: Aligns the output to the right.

    // ---------------------- OPERATORS PRESEDENCE IN C++ --------------------------

   // Operator precedence determines the order in which operators are evaluated. Higher precedence operators are evaluated first
   // If operators have the same precedence, their associativity decides the order (left-to-right or right-to-left).

   int p = 5 + 2 * 3; // Multiplication happens first (2 * 3), then addition (5 + 6)
   cout<<"\n5 + 2 * 3 = "<<p;

   int q = 5 - 12  / 3; // Division happens first (2 / 3), then substration (5 + 6)
   cout<<"\n5 - 12 / 3 = "<<q; 

   // Multiplication > Division > Remainder > Addition > Substration  -- Presendence

   int n =5*9/3; // FIRST MULTIPLICATION (5*9) THEN DIVISION (45 / 3 )
   cout<<"\n5 * 9 / 3 = "<<n;

   //Here operators ( * and / ) have equal precedence but  their associativity is from left-to-right;
     
    return 0;
}
