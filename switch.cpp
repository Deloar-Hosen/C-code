#include<iostream>
using namespace std;


int main()
{  
  int digit;
  cout<<"enter a digit:";
  cin>>digit;
  
  switch(digit)
  {
     case 0:
     cout<<"zero";
     break;
     case 2:
     cout<<"two";break;
     case 3:
     cout<<"three";break;
     default:cout<<"not a digit";
  }

    
         
     return 0;
}