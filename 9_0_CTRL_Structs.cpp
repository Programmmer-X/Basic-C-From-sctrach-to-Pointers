#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << " CONTROL STRUCTURES IN C++ " << endl<< endl;

    /* Control statements in C++ allow you to control the flow of execution in a program based on conditions, repetitions, and decisions. These statements form the backbone of how logic is implemented within programs.*/

    // There are 4 types of Control statements
    /*
        0. Simple sequence statements.
        1. Conditional (Selection) Statements.   ---> If-Eles & Switch case statements.
        2. Looping (Iterative) Statements.       ---> For,While & do while loop statements.
        3. Branching (Jump) Statements.    ---> Putting break,return,continue in loop or switch cases.
    */

    // ------------- Simple sequence statements ---------------

    /*
     Simple sequence statements (or sequential statements) refer to the normal flow of execution where statements are executed one after another, in the order they appear in the code. This is the most basic type of control flow in programming, where there are no branching, loops, or conditional checks affecting the flow of execution.
    */

    int a = 5;                        // Statement 1: Declare and initialize variable a
    int b = 10;                       // Statement 2: Declare and initialize variable b
    int sum = a + b;                   // Statement 3: Compute the sum of a and b
    cout << "Sum is: " << sum << endl; // Statement 4: Output the result

    return 0; // Statement 5: End of program
}