#include<iostream>
#include<stdlib.h> //for malloc
using namespace std;

int main()
{
    // int A[5]={2,4,6,8,10};
    // int *p;
    // p=A;
    int *p;
   // p=(int *)malloc(5*sizeof(int)); //for creating heap memory

    p=new int[5]; //for c++

    p[0]=10; p[1]=20; p[2]=30; p[3]=40; p[4]=50;


    for(int i=0;i<5;i++)
    cout<<p[i]<<endl;

    //memory deallocation
    delete [ ] p; //In C++
    // free(p);  //In C

    return 0;

}