#include <iostream>
using namespace std;

template<class Template>
Template add(Template a,Template b)
{
    return a+b;
}
template<class Template1,class Template2>
Template1 sum(Template1 a,Template2 b)
{
    return a+b;
}


int main()
{
cout<<add(10.8,20.5)<<endl;
cout<<sum(10.8,8);

    return 0;
}