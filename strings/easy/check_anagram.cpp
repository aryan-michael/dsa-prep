#include <bits/stdc++.h>
using namespace std;

int main(){
    string s1 = "cat";
    string s2 = "gel";

    // Brute force approach - Time complexity is O(n logn) - Space complexity is O(1)
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1 == s2) cout << "Anagram" << endl;
    else cout << "Not anagram" << endl;

    return 0;
}