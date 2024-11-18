#include <bits/stdc++.h>
using namespace std;

int main(){

    int arr[] = {1,2,3,1,1,1,1,4,2,3};
    int n = size(arr);
    int length = 0;
    int x = 3;

    // Brute force approach - 2 pointer approach - arrays from i to j will be sub-arrays
    // Time complexity is O(n*n*n) - Space complexity is O(1)
    // for(int i=0; i<n; i++){
    //     int sum = 0;
    //     for(int j=i; j<n; j++){
    //         for(int k=i; k<j; k++){
    //             sum = sum + arr[k];
    //             if(sum == x){
    //                     length = max(length, j-i+1);
    //             }
    //         }
    //     }
    // }

    // Brute force approach (better version) - 2 pointer approach - arrays from i to j will be sub-arrays
    // Time complexity is O(n*n) - Space complexity is O(1)
    // for(int i=0; i<n; i++){
    //     int sum = 0;
    //     for(int j=i; j<n; j++){
    //         sum = sum + arr[j];
    //         if(sum == x){
    //                 length = max(length, j-i+1);
    //         }
    //     }
    // }

    // Better approach - Time complexity is O(nlogn) in the case of an ordered map
    // O(n*1) in the case of unordered map, worst case is O(n*n) if there are a lot of collisions
    // Space complexity is O(n)
    // Optimal approach if there are postives, negatives and 0's in the array
    // map<int, int> preSumMap;
    // int sum = 0;
    // int maxLength = 0;
    // for (int i = 0; i < n; i++) {
    //     sum += arr[i];
    //     if (sum == x) {
    //         maxLength = max(maxLength, i + 1);
    //     }
    //     int rem = sum - x;
    //     if (preSumMap.find(rem) != preSumMap.end()) {
    //         maxLength = max(maxLength, i - preSumMap[rem]);
    //     }
    //     // Add sum to the map if it hasn't been added before
    //     if (preSumMap.find(sum) == preSumMap.end()) {
    //         preSumMap[sum] = i;
    //     }
    // }

    // cout << "longest length is: " << maxLength << endl;

    // Optimal approach - when only positives and 0's exist
    // Time complexity is O(n+n) - Space complexity is O(1)
    int left = 0;
    int right = 0;
    int maxLength = 0;
    int sum = 0;
    while(right < n){
        if(right < n) sum += arr[right];
        while(left <= right && sum > x){
            sum -= arr[left];
            left++;
        }
        if(sum == x){
            maxLength = max(maxLength, right - left + 1);
        }
        right++;
    }

    cout << "longest length is: " << maxLength << endl;

    return 0;
}