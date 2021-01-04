#include <iostream>

#include "lib/lib.h"

int main()
{
  std::cout << "Tekst wydrukowany z funkcji main()" << std::endl;

  lib::print("Tekst wydrukowany z lib.dll");

  lib::print(lib::polaczoneNapisy("Napis lewy." , "Napis prawy."));
  lib::print(lib::polaczoneNapisy("Napis lewy." , "Napis prawy.", ""));

  return 0;
}
