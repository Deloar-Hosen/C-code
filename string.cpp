#include <iostream>
#include <cstring>
#include<string>
using namespace std;

int main()
{
char name1[]="deloar";
char name2[10];
char name3[]=" hosen";

//string length
int len=strlen(name1);
cout<<"len="<<len<<endl;

//string copy
strcpy(name2,name1);
cout<<"name is "<<name2<<endl;

//string concatination
strcat(name1 ,name3);
cout<<name1<<endl;

//string uppercase
strupr(name1);
cout<<name1<<endl;

//string lowercase
strlwr(name1);
cout<<name1<<endl;

//string class
string name="Delaor";
string name4=" hosen";
cout<<name<<endl;

//string add
string name5=name+name4;
cout<<name5<<endl;

//string length
int len2=name5.size();
cout<<"length of name5:"<<len2;

//in string class->tolower,toupper;isupper(s[i])=uppercase.
/*    int year;
     string s;
     cin>>year;
 s=to_string(year);*/
    return 0;
} 