#include<iostream>
using namespace std;

//small codes can use inline function

int sum(int *,int *); //call by refrence

int main(){
int a=5,b=6;
int s=sum(&a,&b);
cout<<"sum is "<<s;
}

int sum(int *p,int *q)
{
    return(*p+*q);
}