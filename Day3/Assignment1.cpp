#include <bits/stdc++.h>
using namespace std;

// void grading(int n) {
//     cout << "Your grade is: ";
//     if (n >= 91 && n <= 100) {
//         cout << "AA";
//     }
//     else if (n >= 81 && n <= 90) {
//         cout << "AB";
//     }
//     else if (n >= 71 && n <= 80) {
//         cout << "BB";
//     }
//     else if (n >= 61 && n <= 70) {
//         cout << "BC";
//     }
//     else if (n >= 51 && n <= 60) {
//         cout << "CD";
//     }
//     else if (n >= 41 && n <= 50) {
//         cout << "DD";
//     }
//     else {
//         cout << "Fail";
//     }
// }

// string grading (int n){
//     if(n >= 91) return "AA";
//     if(n >= 81) return "AB";
//     if(n >= 71) return "BB";
//     if(n >= 61) return "BC";
//     if(n >= 51) return "CD";
//     if(n >= 41) return "DD";

//     return "Fail";
// }


string grading(int marks){
    string grades[] = {"AA","AB","BB","BC","CD","DD"};

    return marks>=40?grades[9-((marks+1)/10)]:"Fail";
}

int main() {
    int marks;
    cout << "Enter your marks: ";
    cin >> marks;

    cout<<"Your Grade is : "<<grading(marks);
}