//
// Created by piotr@janczura.pl on 2021.01.04
//

#ifndef DYNAMIC_LIBRARY_LIB_H
#define DYNAMIC_LIBRARY_LIB_H

#include<string>

namespace lib {

void print(const std::string &input);
std::string polaczoneNapisy(const std::string &napisLewy, const std::string &napisPrawy, const std::string &lacznik = " ");

}


#endif //DYNAMIC_LIBRARY_LIB_H
