//
// Created by piotr@janczura.pl on 2021.01.04
//

#include "lib.h"

#include<iostream>
#include<string>

#ifdef __cplusplus
extern "C" {
#endif


__LEFT__ int __RIGHT__ print(const char *input)
{
  std::cout << input << std::endl;
  return 0;
}

__LEFT__ int __RIGHT__ polaczoneNapisy(char *out, const char *napisLewy, const char *napisPrawy, const char *lacznik)
{
  std::string tmp{ std::string(napisLewy) + std::string(lacznik) + std::string(napisPrawy)};
  tmp.copy(out, tmp.size());
  out[tmp.size()] = '\0';
  return 1;
}

#ifdef __cplusplus
}
#endif
