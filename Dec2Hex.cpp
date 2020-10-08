#include <Dec2Hex.h>
#include <iostream>
using namespace::std;

string Transfer::Dec_to_Hex(int i)
{

    int a, b, c, d;
    a = 0;
    b = 0;
    c = 0;
    d = 0;
    char Hex_num[4] = {"000"};
    if(i<16)
        Hex_num[2]=Transfer::judge1(i);
    else if (i<pow(16,2))
    {
        c = i/16;
        d = i-c*16;
        Hex_num[1] = Transfer::judge1(c);
        Hex_num[2] = Transfer::judge1(d);
    }
    else if (i<pow(16,3))
    {
        b = i/pow(16,2);
        c = (i-16*16*b)/16;
        d = (i-16*16*b-16*c);
        Hex_num[0] = Transfer::judge1(b);
        Hex_num[1] = Transfer::judge1(c);
        Hex_num[2] = Transfer::judge1(d);
    }
    string a_num = Hex_num;
    return a_num;
}
int Transfer::Hex_to_Dec(string i)
{
    char hex_num[4];
    strcpy_s(hex_num, i.c_str());
    int dec_num[3] = { 0 };
    int out = 0;
    for (int j = 0; j < 3; j++)
    {
        dec_num[j] = Transfer::judge2(hex_num[j]);
    }
    out = 16 * 16 * dec_num[0] + 16 * dec_num[1] + dec_num[2];
    return out;
}
char Transfer::judge1(int i)
{
    char a = ' ';
    switch(i)
    {
    case 0:
        a = '0';
        break;
    case 1:
        a = '1';
        break;
    case 2:
        a = '2';
        break;
    case 3:
        a = '3';
        break;
    case 4:
        a = '4';
        break;
    case 5:
        a = '5';
        break;
    case 6:
        a = '6';
        break;
    case 7:
        a = '7';
        break;
    case 8:
        a = '8';
        break;
    case 9:
        a = '9';
        break;
    case 10:
        a = 'A';
        break;
    case 11:
        a = 'B';
        break;
    case 12:
        a = 'C';
        break;
    case 13:
        a = 'D';
        break;
    case 14:
        a = 'E';
        break;
    case 15:
        a = 'F';
        break;
    }
    return a;
}

int Transfer::judge2(char i)
{
    int a = 0;
    switch (i)
    {
    case '0':
        a = 0;
        break;
    case '1':
        a = 1;
        break;
    case '2':
        a =2;
        break;
    case '3':
        a = 3;
        break;
    case '4':
        a = 4;
        break;
    case '5':
        a = 5;
        break;
    case '6':
        a = 6;
        break;
    case '7':
        a = 7;
        break;
    case '8':
        a = 8;
        break;
    case '9':
        a = 9;
        break;
    case 'A':
        a = 10;
        break;
    case 'B':
        a = 11;
        break;
    case 'C':
        a = 12;
        break;
    case 'D':
        a = 13;
        break;
    case 'E':
        a = 14;
        break;
    case 'F':
        a = 15;
        break;
    }
    return a;
}