#include<iostream>
using namespace std;
int main()
{
   char letter;
   //convert charecter to ASCII value
   cout<<"Enter any letter to see ASCII value:";
   cin>>letter;
   cout<<"ASCII value is:"<<int(letter)<<"\n";

   //convert ASCII value to letter
   int num;
   cout<<"Enter number to see ASCII letter:";
   cin>>num;
   cout<<"Letter is:";
   cout<<char(num);
 
   return 0;
}