#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    int b;
    int gcd;
    cout << "enter a: ";
    cin >> a;
    cout << "enter b: ";
    cin >> b;
    cout << endl;

    // Brute Force Approach - O(min(n1, n2))
    // for(int i=1; i<=min(a, b); i++){
    //     if (a%i == 0 && b%i == 0){
    //         gcd = i;
    //     }
    // }

    // Optimal Approach - Euclidean Algorithm - O(log(min(n1, n2)))
    while(a>0 && b>0){
        if(a>b) a = a%b;
        else b = b%a;
    }

    if(a==0){
        gcd = b;
    } 
    else gcd = a;

    cout << "GCD is " << gcd << endl;

    return 0;
}