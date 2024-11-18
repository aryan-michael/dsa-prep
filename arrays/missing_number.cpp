#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n;    
    cin >> n;
    int arr[n];
    for(int i=0; i<n-1; i++) cin >> arr[i];
    int missing_num;

    // Brute force approach - Time complexity is O(n*n) - Space complexity is O(1)
    // we know that the array contains elements from 1 to n, so we check whether each element is present or not using linear search
    // we initialise a flag before the array's loop to 0 and flip it to 1 everytime an element is found and then break out
    // if the flag stays unflipped, that means that number was not found, and that is our solution

    // for(int i=1; i<=n; i++){
    //     int flag = 0;
    //     for(int j=0; j<n; j++){
    //         // linear search
    //         if(arr[j] == i){
    //             flag = 1;
    //             break;
    //         }
    //     }
    //     if(flag == 0){
    //         missing_num = i;
    //     }
    // }

    // Better approach - Time complexity is O(n+n) - Space complexity is O(n)
    // Hashing
    // int hashArr[n+1] = {0};
    // for(int i=0; i<n-1; i++){
    //     hashArr[arr[i]] = 1;
    // }
    // for(int i=1; i<=n; i++){
    //     if(hashArr[i] == 0){
    //         missing_num = i;
    //         break;
    //     }
    // }

    // Optimal approach - Time complexity is O(n) - Space complexity is O(1)
    int expected_sum = n*(n+1)/2;
    int sum = 0;
    for(int i=0; i<n-1; i++){
        sum = sum + arr[i];
    }

    missing_num = expected_sum - sum;

    cout << missing_num << endl;
    cout << endl;
    return 0;
}