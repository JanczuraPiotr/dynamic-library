//
// Created by piotr@janczura.pl on 2021.01.04
//

#ifndef DYNAMIC_LIBRARY_LIB_H
#define DYNAMIC_LIBRARY_LIB_H


#if BUILD_DLL
  #define __LEFT__ __declspec (dllexport)
  #define __RIGHT__ __stdcall
#else
  #define __LEFT__ __declspec (dllimport)
  #define __RIGHT__
#endif

#ifdef __cplusplus
extern "C" {
#endif

__LEFT__ int __RIGHT__ print(const char *input);
__LEFT__ int __RIGHT__ polaczoneNapisy(char *out, const char *napisLewy, const char *napisPrawy, const char *lacznik = " ");

#ifdef __cplusplus
}
#endif



#endif //DYNAMIC_LIBRARY_LIB_H
