def Factorial(Factorial_Number)
  if Factorial_Number < 1:
    
    print("You can't use a negative number for factorial")
    return
  
  elif Factorial_Number == 1:
    return int(Factorial_Number * Factorial(Factorial_Number - 1))
  
Factorial_Number = int(input('Please Enter a Number: '))
print(Factorial(Factorial_Number))
