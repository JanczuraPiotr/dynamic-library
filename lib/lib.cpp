//
// Created by piotr@janczura.pl on 2021.01.04
//

#include "lib.h"

#include<iostream>

namespace lib {

void print(const std::string &input)
{
  std::cout << input << std::endl;
}

std::string polaczoneNapisy(const std::string &napisLewy, const std::string &napisPrawy, const std::string &lacznik)
{
  return napisLewy + lacznik + napisPrawy;
}

}
