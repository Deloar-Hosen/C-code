#include<iostream>
using namespace std;

class Student
{
    protected:
    int roll;
    public:
    void setRoll(int a)
    {
        roll=a;
    }
    void printRoll()
    {
        cout<<"your roll no is:"<<roll<<endl;
    }
};

class Test:virtual public Student
{
    protected:
    float maths,physics;
    public:
    void setMarks(int m,int p)
    {
        maths=m;
        physics=p;
    }
    void printMarks()
    {
        cout<<"Your result is here:"<<endl;
        cout<<"maths:"<<maths<<endl;
        cout<<"physics:"<<physics<<endl;
    }
};

class Sports:virtual public Student
{
    protected:
    float score;
    public:
    void setScore(int sc)
    {
        score=sc;
    }
    void printScore()
    {
        cout<<"your score is:"<<score<<endl;
    }
};

class Result:public Test,public Sports
{
    private:
    float total;
    public:
    void display()
    {
        total=maths+physics+score;
        printRoll();
        printMarks();
        printScore();
        cout<<"Your total score is:"<<total<<endl;
    }
};

int main()
{
Result harry;
harry.setRoll(67);
harry.setMarks(89.5,90.5);
harry.setScore(98);
harry.display();

    return 0;
}