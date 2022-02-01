#include<bits/stdc++.h>
using namespace std;

int power(int b, int p){
    if(p==0) return 1;
    else
    return (b*power(b,p-1));
}

int main(){
    int b, p, result;
    cout<<"Enter the base and its power"<<endl;
    cin>>b>>p;

    result=power(b,p);

    cout<<"Result is : "<<result<<endl;
    return 0;
}