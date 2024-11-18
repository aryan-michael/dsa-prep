#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter number: ";
    cin >> n;
    vector<int> list;
    // Brute Force Approach - O(N)
    // for(int i=1; i<=n; i++){
    //     if(n % i == 0){
    //         cout << i << " "; 
    //     }
    // }
    // cout << endl;

    // Optimal Approach - O(sqrt(N)) + O(nlogn)

    // O(sqrt(N))
    for(int i=1; i*i<=n; i++){
        if(n % i == 0){
            list.emplace_back(i); 
            if(n/i != i){
                list.emplace_back(n/i); 
            }
        }
    }
    // O(nlogn)
    sort(list.begin(), list.end());
    for (auto it : list) cout << it << " ";
    cout << endl;

    return 0;
}