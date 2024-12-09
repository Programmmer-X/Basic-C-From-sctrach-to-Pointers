#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    cout << "\nLOOPS/ITRATTIVE CONSTRUCTUS IN C++" << endl;

    // Loops are block statements which are repeatedly execuated under certain TEST conditions.
    //  loops allow you to execute a block of code multiple times.

    // ----------- 3 TYPES OF LOOPS ------------------
    /*
         1. for loop
         2. while loop
         3. do-while loo
    */

    //------------------ FOR Loop -----------------------

    // for loop is typically used when the number of iterations is known beforehand.
    // It consists of three parts: initialization, TEST Condition, and increment/decrement.
    /* For loop structure

        for (initialization; TEST condition; increment/decrement/UPDATION)
        {
          // loop body(C++ code)
        }
     --->
        Initialization happens only once to start loop
        then 'condition' is checked/Tested
        if true the loop code is excuted then 'UPDATION' ie..increment or decrement takes place
        after that 'condition' is again checked and loop code is excuted then 'UPDATION' this happens repeatedly(loops) until coditions is false.
    */

    for (int i = 0; i <= 100; i++)
    {
        cout << i++ << setw(4);
    }
    // This loop will print even numbers from 0 to 100

    cout << "\n\n";

    for (int i = 1; i <= 100; i++)
    {
        cout << i++ << setw(4);
    }
    // This loop will print odd numbers from 1 to 99

    cout << "\n\n";

    // EXAMPLE OF INFINITE FOR LOOP
    /*
    for(int i =1; 99<=100; i++)
    {
        cout<<i++<<endl;
        //99<=100 is always true condition.
    }
    */

    // ADVICE : avoid infinte loops mistakenly or unmistakenly.

    //------------------ WHILE Loop -----------------------

    // A while loop is used when the number of iterations is not known beforehand and depends on a Test condition.
    //  The loop continues as long as the condition is true.

    /*   WHILE LOOP STRUCTURE

        while (TEST condition)
        {
        // C++ statements.
        }
        --> Is is a pre-tested loop strucutre. It checks condition at the beginning of the structure.
        --> The set of statements are executed again & again until codition is true.
        --> When the condition is false, control is transfered out of the strucutre.
        --> Semi-colon is not used.
        -->MINIMUM no. of executions is ZERO..
    */

    int a = 10;
    // PRINTING 10 to 0 using while loop
    while (a >= 0)
    {
        cout << a << endl;
        a--;
    }
    cout << "\n";

    // EXAMPLE OF INFINITE WHILE LOOP
    // For infinite while loop the test contition must be true always.

    /*   int b=2;
       while(1) //1 is always true.
       {
           cout<<b<<endl<<b--;

       }
   */

    //------------------ do while Loop -----------------------

    // A do-while loop is similar to a while loop, but the condition is checked after the loop body is executed.
    // This guarantees that the loop will run at least once, even if the condition is false.

    /*   DO WHILE LOOP STRUCTURE

   do {
     loop code
   }while(Test Condition);

     --> Is is a post-tested loop strucutre. It checks condition afterexecuting loop code.
     --> The set of statements are executed again & again until codition is true.
     --> When the condition is false, control is transfered out of the strucutre.
     --> Semi-colon is used.
     -->MINIMUM no. of executions is ONCE. i.e.. Loop is executed at least once.
 */

    int k = 11;
    // PRINTING 11 to 20 using do while loop.
    do
    {
        cout << k << setw(3);
        k++;
    } while (k <= 20);

    return 0;
}
