#include<bits/stdc++.h>
using namespace std;



int main(){
    int a=10;
    // int *ptr=&a;
    int* ptr= &a; //Datatype for pointers is datatype*.
    // int *ptr;
    // ptr=&a;

    int** ptrptr = &ptr; // pointer to pointer i.e. (int*)*
    int*** ptrptrptr = &ptrptr;

    // cout<<"a : "<<a<<endl;
    // cout<<"&a : "<<&a<<endl; // & returns its adddress.
    // cout<<"ptr : "<<ptr<<endl;
    // cout<<"*ptr : "<<*ptr<<endl;// * returns the value at address which is stored in ptr.
    // cout<<"&ptr : "<<&ptr<<endl;
    // cout<<"ptrptr : "<<ptrptr<<endl;
    // cout<<"*ptrptr : "<<*ptrptr<<endl;
    // cout<<"**ptrptr : "<<**ptrptr<<endl;

    cout<<"a: "<<a<<endl;                   //=== |
    cout<<"*ptr: "<<*ptr<<endl;             //=== | -> same output
    cout<<"**ptrptr: "<<**ptrptr<<endl;     //=== |
    cout<<endl;
    cout<<"&a: "<<&a<<endl;                 //=== |
    cout<<"ptr: "<<ptr<<endl;               //=== | -> same output
    cout<<"*ptrptr: "<<*ptrptr<<endl;       //=== |
    cout<<endl;
    cout<<"&ptr: "<<&ptr<<endl;             //=== |
    cout<<"ptrptr: "<<ptrptr<<endl;         //=== | -> same output

    return 0;
}