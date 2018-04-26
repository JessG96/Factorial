#include <iostream>
using namespace std;

int Factorial(int User_Number)
{
  int Factorial_Number = User_Number;
  
  if (Factorial_Number < 0)
  {
    cout << "You cannot enter a negative number." << endl;
    return 0;
  }
  else if (Factorial_Number == 1)
  {
    return 1;
  }
  else
  {
    Factorial_Number = Factorial_Number * Factorial(Factorial_Number - 1);
  }
}

int main()
{
  int User_Input;
  
  cout << "Please enter a number." << endl;
  cin >> User_Input;
  
  cout << "Your Number: " << User_Input << endl << "Number after Factorial: " << Factorial(User_Input) << endl;
  
  system("pause");
}
