#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int original_n = n;

    int digits = 0;
    int temp = n;
    while (temp > 0){
        digits++;
        temp = temp / 10;
    }
    cout << "Number of digits: " << endl;

    int sum = 0;
    temp = n;
    while (temp > 0){
        int digit = temp % 10;
        sum = sum + pow(digit, digits);
        temp = temp / 10;
    }

    if (sum == original_n){
        cout << "armstrong number" << endl;
    }
    else cout << "not an armstrong number" << endl;

    return 0;
}