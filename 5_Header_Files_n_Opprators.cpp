// There r 2 types of header files(HF) :
// 1.System HF : It comes with complier.

#include<iostream>
#include<iomanip>

//2.Used Defined HF : It is written by Programmer .
// #include"my_first_header_file.h" --> This will produce error if my_first_header_file.h is not present in current directory.

using namespace std;

int main(){
    cout<<"\nHEADER FILES & OPERATORS"<<endl;
    cout<<"\nOPERATORS in C++: A operator is a symbol(+,-,!,*,<) that tells the compiler to perform specific mathematical or logical manipulations. "<<endl;

    int a=50,b=40;
    //ARITHEMATIC OPREATORS (+,-,/,*)
    cout<<"\nLET a = 50 , b = 40  and can be called as Operands.";
    cout <<"\nThe value of a+b is "<<a+b;
    cout <<"\nThe value of a-b is "<<a-b;
    cout <<"\nThe value of a*b is "<<a*b; // output is int if input is int
    cout <<"\nThe value of a/b is "<<a/b; // output is int if input is int
    cout <<"\nThe value of a%b is "<<a%b <<endl;

    //INCREMENT AND DECREMENT OPREATORS (++,--) only for integer values
 
    cout<< "\n\nValue of a ="<<a;
    cout <<"\nPerforming a++ ";     a++;
    cout <<"\nNOW 'a' after increment is "<<a;

    cout<< "\n\nValue of a ="<<a;
    cout <<"\nPerforming a-- ";     a--;
    cout <<"\nNOW 'a' after decrement is "<<a;
    // a++ = a+1 , a-- = a-1 
    //Suffix means First printing a then performing ++ / --

    cout<< "\n\nValue of a ="<<a;
    cout <<"\nPerforming ++a ";     ++a;
    cout <<"\nNOW 'a' after increment is "<<a;

    cout<< "\n\nValue of a ="<<a;
    cout <<"\nPerforming --a ";     --a;
    cout <<"\nNOW 'a' after decrement is "<<a<<endl;
    // ++a = +1+a , --a = -1+a
    //Preffix means First performing ++ / -- then printing a 

    //ASSINGEMENT OPREATORS --> Use to assign values to variables.

/* 
    eg: "=" is the most common assingment oprator 
    it assigns L.H.S value to R.H.S value.  
     
    int k=5;  -->5 is assigned to 5
    char suman=S;  -->S is assigned to suman
    int j=k; k is assigned to j

    5=k or 5= j !!ERROR!!  ∵ 5 is constant.
*/

    // COMPARISION(Relational) OPERATORS  (>,<,==,>=,<=,!=) used to compare values of two variables
 
    cout << "\nValue of a=50 , b=40" <<endl;
    cout << "(0)--> False (1)--> True" <<endl;
    
    cout<<"\nThe value of a=b is: "<<(a==b);  // Comparing a is equal to b 
    cout<<"\nThe value of a!=b is: "<<(a!=b);  // Comparing a is not equal to b 
    cout<<"\nThe value of a>b is: "<<(a>b);    // a is grater then b
    cout<<"\nThe value of a<b is: "<<(a<b);    // a is lesser then b
    cout<<"\nThe value of a>=b is: "<<(a>=b);  // a is grater then or equal to b
    cout<<"\nThe value of a<=b is: "<<(a<=b)<<endl;  // a is lesser then or equal to b

    // LOGICAL OPERATORS (&&,!,')
    //&& --> LOGICAL AND
    //! -->  LOGICAL NOT

    cout<<"LOGICAL OPREATOR (&&) AND. "<<endl;
    cout<<"\nThe value of ((a!=b) && (a>b)) LOGICAL OPERATOR is: "<<((a!=b) && (a>b)); 
    //The value of 1 && 1 is 1
    cout<<"\nThe value of ((a!=b) && (a<b)) LOGICAL OPERATOR is: "<<((a!=b) && (a<b)); 
    //The value of 1 && 0 is 0
    cout<<"\nThe value of ((a<b) && (a>b)) LOGICAL OPERATOR is: "<<((a<b) && (a>b)); 
    //The value of 0 && 1 is 0
    cout<<"\nThe value of ((a<b) && (a<=b)) LOGICAL OPERATOR is: "<<((a<b) && (a<=b))<<endl; 
    //The value of 0 && 0 is 0

    cout<<"LOGICAL OPREATOR (||) OR. "<<endl;
    cout<<"\nThe value of ((a!=b) || (a>b)) LOGICAL OPERATOR is: "<<((a!=b) || (a>b)); 
    //The value of 1 && 1 is 1
    cout<<"\nThe value of ((a!=b) || (a<b)) LOGICAL OPERATOR is: "<<((a!=b) || (a<b)); 
    //The value of 1 && 0 is 1
    cout<<"\nThe value of ((a<b) || (a>b)) LOGICAL OPERATOR is: "<<((a<b) || (a>b)); 
    //The value of 0 && 1 is 1
    cout<<"\nThe value of ((a<b) || (a<=b)) LOGICAL OPERATOR is: "<<((a<b) || (a<=b))<<endl; 
    //The value of 0 && 0 is 0

    cout<<"LOGICAL OPREATOR (!) NOT. "<<endl;
    cout<<"\nThe value of !(a==b) LOGICAL OPERATOR is: "<<(!(a==b)) ;
    //The value of !0 is 1
    cout<<"\nThe value of !(a>b) LOGICAL OPERATOR is: "<<(!(a>b)) ;
    //The value of !1 is 0

    cout <<"\n \n BITWISE & OTHER OPERATORS WIIL BE EXPLAINED LATER......"<<endl;

    
    return 0;
}