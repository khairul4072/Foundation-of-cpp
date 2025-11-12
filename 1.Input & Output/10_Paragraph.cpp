#include<iostream>
using namespace std;
int main()
{
    char text[100];
    
    cout<<"Enter your text:";

    cin.getline(text, 100);//To get full line string input

    cout<<"Your text is:"<<text;
 
    return 0;
}