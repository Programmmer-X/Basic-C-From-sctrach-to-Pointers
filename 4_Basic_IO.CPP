#include <iostream>
using namespace std;

int main()
{
  cout << "\n\nBASIC INPUT & OUTPUT";

  float num1, num2;

  cout << "\nEnter a value for num1 : ";
  cin >> num1;
  cout << "Enter a value for num2 : ";
  cin >> num2;

  // This << is called as Insertion operator.
  // This >> is called as Extraction operator.

  cout << "\nSUM = " << num1 + num2;
  cout << "\nPRODUCT = " << num1 * num2;

  return 0;
}
