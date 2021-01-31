#include<iostream>

using namespace std;

struct reactangle
{
    int length;
    int breadth;
};

int main(){
    struct reactangle *p;

    p=(struct reactangle *)malloc(sizeof(struct reactangle));   //malloc return void therefore we typecast it

    p->length=10;  //arrow
    p->breadth=20;

    cout<<p->breadth<<endl;
    cout<<p->length;
    
}