#include<iostream>
using namespace std;

int area(int,int);
float area(int);
int main(){
    int r;
    cout<<"Enter radius of the circle"<<endl;
    cin>>r;
    float A=area(r);
    cout<<"Area of the circle is "<<A<<endl;
    cout<<"Enter length and breadth of the rectangle"<<endl;
    int l,b,a;
    cin>>l>>b;
    a=area(l,b);
    cout<<"Area of rectangle is "<<a;
}

float area(int R)
{
    return(3.14*R*R);
}

int area(int L,int B)
{
    return(L*B);
}