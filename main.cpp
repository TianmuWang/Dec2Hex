#include<iostream>
#include<Dec2Hex.h>

using namespace std;

int main()
{
    Transfer trans;
    string result;
    int i;
    cout << "type in an int number between 0 and 1023" << '\t';
    cin >>i;
    result = trans.Dec_to_Hex(i);
    cout << result << endl;
    cout<<trans.Hex_to_Dec(result)<<endl;
    
    return 0;

}