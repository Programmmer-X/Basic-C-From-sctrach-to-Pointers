#include <iostream>
using namespace std;
//                    Data Types & Variable Scope 
int  main(){
    cout<<"\n Data Types & Variable Scope \n \n";

    // int a=5;
    // int b=4; or we can also write it as

    int a=5,b=4;                     //int -- ONLY INTEGER'S
    float pi=3.1415;                // float--FLOTHING POINT NUMBERS KNOWN AS DECIMIALS
    char third_letter= 'c';        // char-- CAN ONLY contain ONE LETTER(CHARACTER)
    char fourth_CAP_letter= 'D';  
    bool x=true;
    bool y=false;

    cout <<" Value of a = "<<a<<"\n Value of b = "<<b<<endl <<endl;

    //endl or /n can be both used for ending lines of c++ program.

    cout <<"The value of pi is "<<pi;
    cout <<"\nThe 3rd letter of english alphabet is "<<third_letter<<" ("<< x<<")";
    cout <<"\nThe 5th letter of english alphabet (in caps) is "<<fourth_CAP_letter<<" ("<< y<<")";
    cout <<"\n 1 - TRUE,\n 0 - FALSE";


    return 0;
}