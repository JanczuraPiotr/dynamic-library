#include <iostream>

#include "lib.h"

int main()
{
  std::cout << "Udaję że robię coś ważnego" << std::endl;

  char napis1[1024];
  char napis2[1024];

  napis1[0] = '\0';
  napis2[0] = '\0';

  std::cout << "wynik pierwszego wykonania : " << polaczoneNapisy(napis1, "Napis lewy." , "Napis prawy.") << std::endl;
  print(napis1);

  std::cout << "wynik drugiego wykonania : " << polaczoneNapisy(napis2, "Napis lewy." , "Napis prawy.", " - ") << std::endl;
  print(napis2);

  return 0;
}
