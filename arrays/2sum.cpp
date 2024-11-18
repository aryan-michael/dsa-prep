#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1,2,3,4,5,6,7,8};
    int n = size(arr);
    int target = 50;
    bool targetFound = false;

    // Brute force approach - Time complexity is O(n*n) - Space complexity is O(1)
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(i==j) continue;
    //         else if(arr[i] + arr[j] == target){
    //             cout << "YES " << i << "," << j;
    //             targetFound = true;
    //             break;
    //         }
    //     }
    //     if(targetFound == true) break;
    // }
    // if(!targetFound) cout << "NO";

    // Better approach - Time complexity is O(n) for ordered map, O(n*logn) for unordered map
    // map<int, int> hashMap;
    // for(int i=0; i<n; i++){
    //     int index = arr[i];
    //     int remainder = target - index;
    //     if(hashMap.find(remainder) != hashMap.end()){
    //         cout << "YES " << hashMap[remainder] << ","<< i;
    //         cout << endl;
    //         return 0;
    //     }
    //     hashMap[index] = i;
    // }
    // cout << "NO";
    // cout << endl;
    // return 0;


    cout << endl;
    return 0;
}