#include<iostream>

using namespace std;

int main(){

    int a=10;
    int &r=a;     //reference->at the declaration

    r=25;   //a will also change
    cout<<a<<endl;
    cout<<r;

    return 0;   
}