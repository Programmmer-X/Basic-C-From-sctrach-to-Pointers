#include <iostream>
using namespace std;

int glo_1 = 5; // GlOBAL VARIABLE-1
int glo_2 = 8; // GlOBAL VARIABLE-2

void sum(){
  
    cout<<"\nGOBAL VARIABLE-2 (DECLARED IN A Function)="<<glo_2;
}
void sum2(){
    glo_2=99;
    cout<<"\nGOBAL VARIABLE-2 (MODIFIED inside a function)="<<glo_2;
}

int main() {
    cout << "\nVARIABLE SCOPE (LOCAL & GOBAL) \n \n";
    //VARIABLE PRESIDENCE: LOCAL>GOBAL

    int loc = 50; //LOCAL VARIBLE
    cout<<"Local VARIABLE = "<<loc;

    cout<<"\nGOBAL VARIABLE-1 = "<<glo_1;

    int glo_2 = 20; 
    //LOCAL VAR-2(MODIFIED GLOBAL VARIABLE)
    // Local var takes presidence 
    cout<<"\nGOBAL VARIABLE-2 (PRESIDENCED BY A LOCAL VARIABLE)= "<<glo_2;
   
    //NOW, IF we declare glo_2 = 78 in this line after glo_2=200
    glo_2=78;
    //THE 78 TAKES PREDSIDENCE IN variable glo_2 i.e. complier select latest line.

    cout<<"\nGOBAL VARIABLE-2 (MODFIED BY NEXT LOCAL VARIBLE)= "<<glo_2;
    
    /*LOCAL VARIBLE AND GLOBAL VARIABLE CAN HAVE SAME NAME BUT PREDIDENCE IS GIVEN TO LOCAL VARIABLE*/

    sum();
    //SCOPE OF VARIBLE DECLARED IN A FUNCTION prefer GLOBAL VARIABLE IF A LOCAL VARIBLE IS NOT DECLARED IN THE FUNCTION

    sum2();
    //Now LOCAL VARIBLE DECLARED IN THE FUNCTION TAKES PRESIDENCE

    return 0;
}