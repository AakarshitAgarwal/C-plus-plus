#include<iostream>

using namespace std;

class Complex
{
    private:
    int a,b;
    public:
    void set_data(int,int);
    void show_data()
    { 
        cout<<"\na->"<<a<<" b->"<<b;
    }
};
void Complex:: set_data(int x,int y) //we can define fuction
//Complex:: -> way to write member function
{
    a=x; b=y;
}
int main()
{
    Complex c1; //c1 is an object
    c1.set_data(3,4);
    c1.show_data();
}