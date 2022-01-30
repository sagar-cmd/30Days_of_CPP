#include<bits/stdc++.h>
using namespace std;

double calc(double a, double b, char op){
    switch(op){
        case '+':
            return a+b;
        case '-':
            return a-b;
        case '*':
            return a*b;
        case '/':
            return a/b;
    }
    return 0;
}

int main(){
    double a,b,result;
    char op;
    cin>>a>>op>>b;

    // switch(op){
    //     case '+':
    //         result = a+b;
    //         break;
    //     case '-':
    //         result = a-b;
    //         break;
    //     case '*':
    //         result = a*b;
    //         break;
    //     case '/':
    //         result = a/b;
    //         break;
    // }

    result = calc(a,b,op);
    cout<<a<<" "<<op<<" "<<b<<" = "<<result;
    return 0;
}