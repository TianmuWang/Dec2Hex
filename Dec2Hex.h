#include <iostream>

#ifndef Dec2Hex
#define Dec2Hex
#define LIBRARY_VERSION	1.0.0

using namespace::std;
class Transfer
{
    public:

    string Dec_to_Hex(int i);

    int Hex_to_Dec(string i);

    private:

    char judge1(int i);
    int judge2(char i);
    
};
#endif