#include<iostream>
using namespace std;

int sum=6174;

int main()
{
    cout <<"REFFRENCE VARIABLE & TYPECASTING"<<endl;

    //---------------------------Built in Data types----------------------------------
/*
    int a,b,sum;
    cout<<"\nEnter value of a "<<endl;
    cin>>a ;
    cout<<"\nEnter value of b"<<endl;
    cin>>b;
    sum= a+b;
    cout << "\nSum = "<<sum;
    cout << "\nGOBAL Sum = "<<::sum;
    // Here by using scope resolution operator (::) we reffred/called gobal value of sum.
*/

    //---------------------- Float,Double & Long Double Literals ----------------------

    float e=36.6;
    double g=36.6;
    long double h=36.6;
    
    // 36.6 is floating point number
    cout <<"\nValue of e = "<<e<<"\nValue of g = "<<g<<"\nValue of h = "<<h<<endl;
    cout<<"\nThe size of e = 36.6 is "<<sizeof(e);
    cout<<"\nThe size of g = 36.6 is "<<sizeof(g);
    cout<<"\nThe size of h = 36.6 is "<<sizeof(h);

    //But, By default 36.6 is considerd as a value of long double conatiner not as of float container by the complier.

    //Now, If i want to present 36.6 as a value contained in a float variable then 36.6f OR F should be used.
    // => float e=36.6f;  must be specified.
    // SIMILARLY for long double we use "l OR L"
    // long double g=36.6l;

    //This practice is highly useful in  Function Overloading.

    float x=49.9F;       // Just sending 49.9 with more information using f
    long double y=49.9l; // Just sending 49.9 with more information using l
    cout <<"\n\nValue of x = "<<x<<"\nValue of y = "<<y<<endl; 

    cout<<"\nThe size of 49.9F is "<<sizeof(49.9F);
    cout<<"\nThe size of 49.9f is "<<sizeof(49.9f);
    cout<<"\nThe size of 49.9L is "<<sizeof(49.9L);
    cout<<"\nThe size of 49.9l is "<<sizeof(49.9l)<<endl;

    //---------------------- REFERENCE VARIABLE ------------------------------------

    //REFRENCE VARIABLE IS ANOTHER CONTAINER NAME GIVEN TO A VARIABLE
    int k=100;
    int &ref =k;    // "ref" is a reference to the variable "k".
    int & jef = ref; // "jef" is a reference to the variable "ref".

    // Any changes made to "ref" will affect "k" because they are essentially the same variable.
    // Any changes made to "jef" will affect "ref" because they are essentially the same variable.
    // AND ALSO, Any changes made to "ref" will affect "jef" and as well "k" because they are essentially the same variable.

    cout<<"\nk ="<<k;
    cout<<"\nref ="<<ref;
    cout<<"\njef ="<<jef<<endl;
     
    ref = ref+10; //Changes made!!

    cout<<"\nk ="<<k;
    cout<<"\nref ="<<ref;
    cout<<"\njef ="<<jef<<endl<<endl;

    // ---------------------- TYPECASTING ------------------------------------

    // TYPECASTING refers to the conversion of one data type into another.

   int n = 40;
   float m = 58.8;
   
   cout<<"The value of n is "<<(double)n;
   cout<<"\nThe value of n is "<<double(n); 

   cout<<"\nThe value of m is "<<(int)m;
   cout<<"\nThe value of m is "<<int(m);

   cout<<"\nValue of EXPRESSION n+m is "<<n+m;
   cout<<"\nValue of EXPRESSION n + (int)m is "<<n + (int) m;
   cout<<"\nValue of EXPRESSION n + int(m) is "<<n + int (m);

   
    /* There are two types of typecasting in C++:

       1) Implicit Typecasting (Automatic Type Conversion)
       2) Explicit Typecasting (Manual Type Conversion)

       WILL  BE EXPLAINED LATTER.
    */ 


    return 0;
}
