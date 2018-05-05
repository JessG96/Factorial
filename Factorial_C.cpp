#include <iostream>
using namespace std;

int User_Input = 0;

int Factorial_C(int User_Number)
{
 int Factorial_Number = User_Number;
  
  if(User_Number < 1)
  {
    cout << "Cannot input a negative number or zero" << endl;
  }
  else if(User_Number ==1)
  {
   return 1; 
  }
  else
  {
    return Factorial_Number * Factorial_C(User_Number - 1);
  }
}

int main()
{
  cout << "Enter a number: " << endl << "Input is ";
  cin >> User_Input;
  
  cout << "The Factorial of number " << User_Input << " is " << Factorial_C(User_Input) << endl;
  cout << endl;
  system("pause");
}
