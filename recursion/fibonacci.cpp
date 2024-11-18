#include <bits/stdc++.h>
using namespace std;

int fibonacci(int n){
    if(n <= 1) return n;
    int last = fibonacci(n-1);
    int s_last = fibonacci(n-2);
    return last + s_last;
}

int main(){
    int n;
    cout << "How many fibonacci numbers until n: ";
    cin >> n;
    cout << fibonacci(n);
    cout << endl;

    return 0;
}