#include <iostream>
using namespace std;

int main()
{
    cout << "POINTERS in C++\n";
    /* POINTER ----> is also a (variable/container) data type just like int, char, bool etc...
      --> A pointer is data type which stores memory addres of other data types (int,char,float...)
      --> IT CAN STORE ADRESS OF OTHER POINTERS BECAUSE A POINTER IS ALSO A DATA TYPE
      --> This data type is created to allocate or de-allocate memory.
      --> This provides better usage of memory which is one of the most importent face in programming.

      Hence, A pointer in C++ is a variable that stores the address of another variable. Pointers provide powerful ways to work with memory, access variables indirectly, direct access to memory, optimization and enable dynamic memory management.
    */

    // ------------------ Syntax of Pointers --------------------
    /*  let int a = 3;             ---> an integer variable a holding vale of 3.

        data_type *pointer_name;   ---> * denoter that (pointer_name) is a pointer.

        => int *u;

        Now to use this pointer 'u' we have to declare its value.

        ------- Declerization to value of pointer: ------------

        *pointer = &variable_for_which_pointer_is_declared;

        => *u = &a;                ---> & denotes aadress_of variable 'a'.

        The pointer 'u' is pointed to variable 'a'.
   */

    int a = 3;
    int *u = &a;

    /*   ------------- OUTPUTS ----------------
        Output for a is : 3
        Output for u is : address of a in memory.  (Eg: 0xd2035ffde4)
        Output for &a is also : address of a in memory. (Eg: 0xd2035ffde4)
        
    */

   cout<<"Value stored in variable a: "<<a<<endl;
   cout<<"Addres of variable a  (*u): "<<u<<endl;
   cout<<"Addres of variable a  (&a): "<<&a<<endl;  

   // Q. Why to use *u insted of &a to represent address?
    /* Answer: Both can be used to represent address. 
       But repsenting address is just not enough in programming we have to allocate or de-allocate this memory or 
    */


    return 0;
}