#include <iostream>

//Function prototypes

bool isEven(int n);

bool isPrime(int n);

int main()
{

  float n;
  /* prompt user to enter a number*/
  std::cout << "Please enter a number: ";

  std::cin >> n;

  std::cout << "You entered " << n << "\n";

  //check if it is even and print appropriate message
  if (isEven(n))
  {
    std::cout << "It is even\n";
  }
  else
  {
    std::cout << "It is odd\n";
  }

  //check if it is a prime and print appropriate message
  if (isPrime(n))
  {
    std::cout << "It is a prime\n";
  }
  else
  {
    std::cout << "It is not a prime\n";
  }
}

bool isEven(int n)
{

  //Check if a remainder when divided by 2
  if (n % 2 == 0)
  {

    return true;
  }
  else
  {

    return false;
  }
}

bool isPrime(int n)
{
  /* assume it is not a prime */
  bool isAprime = true;

  //loop through numbers from 2 to less than the number
  for (int i = 2; i < n; i++)
  {
    //if no remainder, it must have factor so can't be prime
    if (n % i == 0)
    {
      isAprime = false;
      break; //quit from for loop
    }
  }
  return isAprime;
}
