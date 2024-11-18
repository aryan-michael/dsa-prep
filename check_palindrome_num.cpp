#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Please enter the number: ";
    cin >> n;
    int original_n = n;
    int reversed_n = 0;

    while (n>0){
        int digit = n % 10;
        reversed_n = reversed_n * 10 + digit;
        n = n / 10;
    }
    if(reversed_n == original_n){
        cout << "Palindrome" << endl;
    }
    else cout << "Not a Palindrome" << endl;

    return 0;
}