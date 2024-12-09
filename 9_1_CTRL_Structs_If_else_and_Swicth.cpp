#include <iostream>
using namespace std;

int main()
{

    cout << " CONTROL STRUCTURES IN C++ " << endl
         << endl;

    cout << "If-Else & Switch case conditional Statements" << endl
         << endl;

    // --------------- Conditional (Selection) Statements ------------------

    // These statement allows programmer to select a statement or set of statements for execution based on some condtitons.

    /* THERE ARE 4 TYPES OF Selection Statements
        1.Simple if statement
        2.if-else statement
        3.if-else ladder
        4.Nested if-else
        5.Switch statement
    */

    // Simple if statement : Executes a block of code only if a specified condition is true.

    int i;
    cout << "Enter value of i :";
    cin >> i;

    if (i >= 0)
    {
        // Here if i value is <0 then this programm block will exit.

        cout << i << " is a Positive Integer.";
    }

    cout.flush(); // Ensuring all output is flushed.

    // If-else Statement : Executes one block of code if the condition is true, and another if it is false.

    int k;
    cout << "\n\nEnter value of k :";
    cin >> k; // Here if k value is <0 then else block will be executed.

    if (k > 0)
    {
        cout << k << " is a Positive Integer.";
        // This Block of code is executed if condition is true.
    }
    else
    {
        cout << k << " is a Negative Integer.";
        // This Block of code is executed if condition in if block is false.
    }

    // If-else-if : Ladder Checks multiple conditions in sequence.

    int age;
    cout << "\n\nTell me your age :";
    cin >> age;

    if (age > 18)
    {
        cout << "\nWelcome to Party, You can have beer!!";
    }
    else if (age == 18)
    {
        cout << "\nWelcome to Party, You can have Coldrinks!!";
    }
    else if (age < 1)
    {
        cout << "You are not yet born.";
    }
    else
    {
        cout << "\nYOU CAN GO TO KIDS PARTY.";
    }

    // Nested if : An if statement within another if statement.

    int x;
    cout << "\n\nEnter a value of x :";
    cin >> x;

    if (x >= 0)
    {

        if (x % 2 == 0)
        { // x is diveded by 2 and if remainder == 0 the x is even or else odd.
            cout << x << " is even no.";
        }
        else
        {
            cout << x << " is odd no.";
        }
    }
    else
    {
        cout << x << " is -ve no.";
    }

    cout << "\n\nDone with If-elses Selction Statements";

    // Switch case Statement: Allows multi-way branching based on the value of an expression.

    int Age;
    cout << "\n\nTell me your Age :";
    cin >> Age;
    switch (Age)
    {
    case 18: // Here if Age =18 then this block is executed
        cout << "You are 18 ";
        break; // If this cases is matched then keyword "break" terminate switching to next case .
        // If case is not matched the program switches to next case for matching the Age condition.
    case 22:
        cout << "You are 22 ";
        break;

    case 2:
        cout << "You are 2 ";
        break;

    case 0:
        cout << "You are not born yet ";
        break;

    default: // If no case is matched to age condition then default block code is executed.
        cout << "No special age case!!.";
        break; // Exithing from entire switch block code
    }

    cout << "\n\nDone with Switches case Selction Statements";

    return 0;
}
