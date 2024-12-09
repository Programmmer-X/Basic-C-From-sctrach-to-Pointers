#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   cout << "JUMP STATEMENTS / TRANSFER OF CONTROL by [break,continue,goto,return]\n\n";

   // In C++, jump statements allow you to transfer control to another part of the program, often bypassing the regular control flow.
   // These statements can alter the sequence of execution directly.

   // ------------- break Statement -------------

   /* --> Used to exit a loop or switch case prematurely.
      --> It stops the nearest enclosing loop or switch statement and continues with the next line of code after the loop or switch block.
   */

   // Eg: Breaking loop berfore test condition is falsifed

   for (int i = 0; i <= 20; i++)
   {
      // if(i==16) break; --> If used here then loop breaks at i = 16
      cout << i << setw(3);
      if (i == 16)
         break; // When used here then loop breaks at i = 16
   }
   cout << "\n";

   // ------------- continue Statement -------------

   /* --> Used to skip a perticular element of loop iteration.
      --> Skips the remaining code in the current iteration of a loop and proceeds to the next iteration
      --> Only valid inside of a loops (for, while, or do-while).
   */

   // Eg: Skipping 4 in iteration

   for (int i = 0; i <= 5; i++)
   {
      if (i == 4)
         continue; // Skips when i is 4
      cout << i << setw(3);
   }

   // goto and return statements will be disscused later....

   return 0;
}