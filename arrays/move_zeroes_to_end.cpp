#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter elements of array: ";
    for(int i=0; i<n; i++) cin >> arr[i];

    // Brute force approach - Time complexity is 0(n + n-x)
    // vector<int> temp;
    // for(int i=0; i<n; i++){
    //     if(arr[i] != 0){
    //         temp.push_back(arr[i]);
    //     }
    // }

    // for(int i=temp.size(); i<n; i++){
    //     temp.push_back(0);
    // }

    // for(auto it: temp) cout << it << " ";
    
    // Optimal - 2 pointer approach - Time complexity is O(x + n-x) -> O(n) - Space complexity is O(1) - no extra space used.
    int j = -1;
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            j=i;
            break;
        }
    }

    for(int i=j+1; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }

    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}