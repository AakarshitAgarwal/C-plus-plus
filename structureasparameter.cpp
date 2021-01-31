#include<iostream>

using namespace std;

// struct reactangle{

//     int length;
//     int breadth;
// };
// //call by value
// int area(struct reactangle r1){

//     return(r1.length*r1.breadth);
// }

// int main(){
//     struct reactangle r={10,5};
//     cout<<area(r);

//     return 0;
// }

struct reactangle{

    int length;
    int breadth;
};
//call by address
void changeLength(struct reactangle *p,int l){

    p->length=l;
}

int main(){
    struct reactangle r={10,5};
    changeLength(&r,20);

    cout<<r.length;
    return 0;
}