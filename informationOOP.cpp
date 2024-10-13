#include<iostream>
using namespace std;

class Information
{
  public:
  string name;
  int roll;
  int age;
  int id;
};
int main()
{ 
  int n;
  cout<<"Number of students:";
  cin>>n;
Information students[n];
for(int i=0;i<n;i++)
{
  cin>>students[i].name;
  cin>>students[i].roll;
  cin>>students[i].age;
  cin>>students[i].id;
}
cout<<endl;
int roll;
cout<<"enter roll:";
cin>>roll;

for(int i=0;i<n;i++)
{
  if(roll==students[i].roll)
 {
  cout<<endl<<"Name:"<<students[i].name<<endl;
  cout<<"Roll:"<<students[i].roll<<endl;
  cout<<"Age:"<<students[i].age<<endl;
  cout<<"Id:"<<students[i].id<<endl;
 }
} 
 return 0;
}

