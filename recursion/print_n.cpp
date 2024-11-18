#include <bits/stdc++.h>
using namespace std;

// Print 1 to N
// int counter = 0;
// void print(int n){
//     if(counter == n) return;
//     cout <<  counter << " ";
//     counter++;
//     print(n);
// }

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     print(n);
//     cout << endl;
//     return 0;
// }

// Print N to 1
// void print(int counter){
//     if(counter < 0) return;
//     cout <<  counter << " ";
//     print(counter - 1);
// }

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     print(n);
//     cout << endl;
//     return 0;
// }

// Print name n times

// void printName(int i, int n){
//     // base condition
//     if(i>n) return;
//     cout << "Aryan" << " ";
//     printName(i+1, n);
// }

// int main(){
//     int n;
//     cout << "Please enter a number: ";
//     cin >> n;
//     printName(1, n);
//     cout << endl;
//     return 0;
// }

// Sum of first N numbers
// int print(int n){
//     if(n == 0) return 0;
//     return n+print(n-1);
// }

// int main(){
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     int sum = print(n);
//     cout << "Sum is " << sum << endl;
//     return 0;
// }

// Factorial of first N numbers
int print(int n){
    if(n <= 1) return 1;
    return n*print(n-1);
}

int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int fact = print(n);
    cout << "Factorial is " << fact << endl;
    return 0;
}