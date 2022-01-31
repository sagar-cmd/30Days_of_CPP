#include<bits/stdc++.h>
using namespace std;

// 1. It has different no. of parameters.
// 2. It has same no. of parameters but different data types of parameters.
// 3. It has different no. of parameters and different data types of parameters.

int max_self(int a, int b){
    // if(a>b){
    //     return a;
    // }
    // else{
    //     return b;
    // }
    
    // Terniary operator
    // (condition) ? (true condition) : (false condition)

    return a>b?a:b;
}

int max_self(int a, int b, int c){
    return max_self(a,max_self(b,c));
}

int max_self(int a, int b, int c, int d){
    return max_self(a,max_self(b,c,d));
}

int main(){
    cout<<"Max of 2 no. is "<<max_self(10,20)<<endl;
    cout<<"Max of 3 no. is "<<max_self(20,50,-2)<<endl;
    return 0;
}