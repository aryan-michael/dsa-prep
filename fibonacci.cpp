#include <bits/stdc++.h>
using namespace std;

int main(){
    // Conventional Approach
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int a = 0;
    int b = 1;
    cout << a << " " << b << " ";

    for (int i=0; i<n-2; i++){
    
        int next = a+b;
        cout << next << " ";
        a = b;
        b = next;
    }
    
    cout << endl;

    return 0;
}