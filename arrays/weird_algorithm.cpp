#include <bits/stdc++.h>
using namespace std;

// take input n. if n is even, you divide it by 2, if it's odd, you multiply by 3 and add 1.
// you keep doing this until you receive the number 1

void weird_algorithm(long long n){
    while(n != 1){
        cout << n << " ";
        if(n%2 == 0){
            n = n/2;
        }
        else if(n%2 != 0){
            n = 3*n + 1;
        }
    }
    cout << n;
}
int main(){
    long long n;
    cin >> n;
    weird_algorithm(n);
    cout << endl;
    return 0;
}