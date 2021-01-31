#include<iostream>

using namespace std;


//note:array is always pass by address not by value(reference) 

void fun(int A[ ]){
    cout<<sizeof(A)/sizeof(int)<<endl;  //ans-2 , since of size of pointer is 8
}
int main(){
    int A[ ]={2,3,4,5,6};
    int n=5;
    fun(A);

    for(int x:A)
    cout<<x<<" ";

    return 0;
}