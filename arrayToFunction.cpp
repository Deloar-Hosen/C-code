#include<iostream>
using namespace std;

void displayArray(int num[],int size )
{
   for(int i=0;i<=4;i++)
   cout<<num[i]<<endl;
}


int main()
{ 

int num[5]={3,4,5,6,6};

displayArray(num,5);


     return 0;
}
