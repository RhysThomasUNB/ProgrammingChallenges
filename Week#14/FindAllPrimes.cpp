#include <stdio.h>

int main()
{
  //I/O
  int primeRange;
  printf("What is the range of Primes?\n>");
  scanf("%d", &primeRange);

  //Array Initialization
  bool numArr[primeRange];
  for(int i = 0; i < primeRange; i++)
    numArr[i] = true;

  //Sieve of Sundaram Alg. Provided by Wikipedia
  int maxRange = (primeRange / 2) - 2;
  for(int i = 1; i < maxRange; i++)
  {
    for(int j = 1; j < maxRange; j++)
    {
      int numToRemove = i + j + (2 * i * j);
      if(j >= i && numToRemove <= primeRange)
          numArr[numToRemove] = false;
      else
        break;
    }
  }

  //Print prime numbers!
  for(int i = 0; i < primeRange; i++)
    if(numArr[i])
      printf("%d\n", 2 * i + 1);
}
