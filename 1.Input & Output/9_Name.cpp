#include<iostream>
using namespace std;
int main()
{
    char Name[30];
    cout<<"Enter your name:";
    cin.getline(Name, 30);//To get full line string input
    cout<<"Your Name is:"<<Name;
    
    return 0;
}