#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any decimal number:";
    cin>>num;

    cout<<"Equivalent octel number is:"<<oct<<num<<'\n';//Convert Decimal to octal

    cout<<"Equivalent hexadecimal number is:"<<hex<<num<<'\n';//Convert Decimal to hexadecimal
    
    //Convert octel to decimal
    int num1;
    cout<<"Enter any Octal number number:";
    cin>>oct>>num1;
    cout<<"Equivalent  decimal number is:"<<dec<<num<<'\n';

     //Convert octel to decimal
    int num2;
    cout<<"Enter any Hexadecimal number number:";
    cin>>hex>>num1;
    cout<<"Equivalent  decimal number is:"<<dec<<num;

    return 0;
}