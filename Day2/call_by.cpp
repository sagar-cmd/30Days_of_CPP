#include<bits/stdc++.h>
using namespace std;

void incr_by_value(int a){
    ++a;
};

void incr_by_address(int *ptr){
    *ptr++;
};

void incr_by_reference(int &a){
    a++;            // Access the complete function
};


int main(){
    int a=10;
    incr_by_value(a);  // Increments the value of variable in the fuc. itself and then destroys it.  Output = 10
    incr_by_address(&a); // Increments the value of variable whose address is passed in the pointer. Output = 11
    incr_by_reference(a);
    
    cout<<a<<endl;

    return 0;
}