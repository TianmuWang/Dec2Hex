#include<iostream>
#include<Dec2Hex.h>

using namespace std;

int main()
{
    Transfer trans;
    int i = 1023;
    cout<<trans.Dec_to_Hex(i)<<endl;
    return 0;

}