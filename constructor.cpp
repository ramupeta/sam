#include<iostream>
using namespace std;
class t
{
int a,b;
char c[199];
public:
void get();
void put();
t();
};
t::t()
{
    cout<<"constructor:"<<endl;
}
void t::get()
{

    cin>>a>>b>>c;
}
void t::put()
{

    cout<<a<<b<<c<<endl;
}
int main()
{

    t t1;
    t1.get();
    t1.put();
}