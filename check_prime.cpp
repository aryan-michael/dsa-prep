#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    bool isPrime = true;
    cout << "Enter number: ";
    cin >> n;
    if (n<=1) isPrime = false;

    else{
        for (int i=2; i<n; i++){
            if(n%i == 0) {
                isPrime = false;
            }
            else isPrime = true;
        }
    }

    if(isPrime == true) cout << "Prime Number" << endl;
    else cout << "Not a Prime number" << endl;

    return 0;
}