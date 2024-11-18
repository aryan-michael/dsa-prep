#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 1, 2, 3, 3, 4, 4, 5, 5};
    int n = size(arr);
    int num;

    // Brute force approach - Time complexity is O(n*n) - Space complexity is O(1)
    // Linear search
    // for(int i=0; i<n; i++){
    //     num = arr[i];
    //     int count = 0;
    //     for(int j=0; j<n; j++){
    //         if(arr[j] == num){
    //             count++;
    //         }
    //     }
    //     if(count == 1){
    //         cout << "number is: " << num << endl;
    //     }
    // }

    // Better approach - Time Complexity is O(nlog(n/2 + 1)) + O(n/2 + 1) because first we put stuff into the map, then we iterate over the map
    // Hashing
    // map<int, int> mpp;
    // for(int i=0; i<n; i++){
    //     mpp[arr[i]]++;
    // }
    // for(auto it: mpp){
    //     if(it.second == 1){
    //         num = it.first;
    //         break;
    //     }
    // }

    // cout << "number is: " << num << endl;

    // Optimal approach - Time complexity is O(n) - Space complexity is O(1)
    int xor1 = 0;
    for(int i=0; i<n; i++){
        xor1 = xor1 ^ arr[i];
    }

    cout << "number is: " << xor1 << endl;

    return 0;
}