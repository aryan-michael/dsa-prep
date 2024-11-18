#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    // Brute force approach - Time complexity is O(nlogn+n)
    // set<int> Set;
    // for(int i=0; i<n; i++){
    //     Set.insert(arr[i]);
    // }
    // for (auto it : Set) {
    //     cout << it << " ";
    // }
    // cout << endl;

    // Optimal approach - 2 pointer approach - Time complexity is O(n)
    int i = 0;
    for(int j=1; j<n; j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }

    for(int k=0; k<=i; k++) cout << arr[k] << " ";
    cout << endl;

    return 0;
}