
#include<iostream>
using namespace std;
 
 
class Nine {
    public:
       string name;
    int roll;
    int age;
    float mark;
    string result;
  void input()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the roll:";
        cin>>roll;
        cout<<"Enter the age:";
        cin>>age;
        cout<<"Enter the mark:";
        cin>>mark;
        cout<<"Enter the result:";
        cin>>result;
    }
    void display()
    {
        cout<<endl<<endl<<"Name:"<<name<<endl;
        cout<<"Roll:"<<roll<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Mark:"<<mark<<endl;
        cout<<"Result:"<<result<<endl<<endl;
    }
};
 
class Ten {
    public:
        string name;
    int roll;
    int age;
    float mark;
    string result;
   void input()
    {
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the roll:";
        cin>>roll;
        cout<<"Enter the age:";
        cin>>age;
        cout<<"Enter the mark:";
        cin>>mark;
        cout<<"Enter the result:";
        cin>>result;
    }
    void display()
    {
        cout<<endl<<endl<<"Name:"<<name<<endl;
        cout<<"Roll:"<<roll<<endl;
        cout<<"Age:"<<age<<endl;
        cout<<"Mark:"<<mark<<endl;
        cout<<"Result:"<<result<<endl<<endl;
    }
};
class Final: public Nine, public Ten
 {
 
};
 
int main() {
    Final Class;int classs;

    cout<<"Enter the class:"<<endl;
    cin>>classs;

    if(classs==9)
    {
    Class.Nine::input();
    Class.Nine::display();
    }
    else if(classs==10)
    {
    Class.Ten::input();
    Class.Ten::display();
    }
    else
    {
    cout<<"invalid class";
    }
    return 0;
}