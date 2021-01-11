#include<iostream>

using namespace std;

int main(){
    void fun();  //fun declaration
    cout<<"You are in main"<<endl;
    fun();  //fun call
}

void fun()   //fun defination
{
    cout<<"you are in fun";
}