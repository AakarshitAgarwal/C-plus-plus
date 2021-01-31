#include<iostream>

using namespace std;

// //call by value-->use when fun. return some result

// int add(int a,int b){
//     int c;
//     c=a+b;

//     return c;
// }

// int main(){

//     int num1=10;
//     int num2=20;
//     int sum;
//     sum=add(num1,num2);

//     cout<<"sum is "<<sum;

//     return 0; 
// }

// //call by addresss->use to modify variables

// void swap(int *a,int *b){
//     int temp;

//     temp=*a;
//     *a=*b;
//     *b=temp;
// }

// int main(){

//     int num1=10;
//     int num2=20;
//     swap(&num1,&num2);

//     cout<<"num1 and num2 is "<<num1<<" "<<num2;

//     return 0;
// }

//call by reference->

void swap(int &a,int &b)   //becoming inline function
{
    int temp;

    temp=a;
    a=b;
    b=temp;
}

int main(){

    int num1=10;
    int num2=20;
    swap(num1,num2);

    cout<<"num1 and num2 is "<<num1<<" "<<num2;

    return 0;
}

