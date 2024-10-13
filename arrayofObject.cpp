#include <iostream>
#include <string>
using namespace std;

class Employee
{
    string name;
    int id;
    int salary;

public:
    void setInformation()
    {
        cout << "enter name:";
        cin >> name;
        cout << "enter id:";
        cin >> id;
        cout << "enter salary:";
        cin >> salary;
    }

    void disPlay()
    {
        cout << endl;
        cout << "name:" << name << endl;
        cout << "id:" << id << endl;
        cout << "salary:" << salary << endl;
    }
};

int main()
{
    Employee person[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter information for person:" << i + 1<<endl;
        person[i].setInformation();
    }
    for (int i = 0; i < 3; i++)
    {
        person[i].disPlay();
    }

    return 0;
}