#include<iostream>

using namespace std;

int main()
{
    int a=10;
    int *p;   //pointer declaration
    p=&a;

    cout<<a<<endl;
    cout<<"using the pointer "<<*p;
        cout<<"address of a "<<p;
    return 0;

}