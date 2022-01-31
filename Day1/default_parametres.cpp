#include<bits/stdc++.h>
using namespace std;

int sum(int a=0 ,int b=0 ,int c=0 ,int d=0 ,int e=0 ,int f=0 ,int g=0 ,int h=0 ){
    cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<e<<" "<<f<<" "<<g<<" "<<h<<endl;
    return a+b+c+d+e+f+g+h;
}

int main(){
    cout<<"Sum of 0 numbers = "<<sum()<<endl;
    cout<<"Sum of 2 numbers = "<<sum(10,20)<<endl;
    cout<<"Sum of 3 numbers = "<<sum(65,45,12)<<endl;
    cout<<"Sum of 4 numbers = "<<sum(78,1,5,6)<<endl;

    return 0;
}