#pragma once
#define DllImport  extern "C" __declspec( dllimport )
#define DllExport  extern "C" __declspec( dllexport )
#include <stdint.h>


DllExport void func();
DllExport const char* getName();

DllExport void cPrint(char* str);

DllExport void cPrint1(char* str);

DllExport char* rstring(char* str);

DllExport int i = 10;
DllImport int j;
DllExport int n;



DllExport const char* greetString() {
    //������Ҫת��
   // return "Hello from Nativeë��ϯ\0";
    return "Hello from Native\0";
}
