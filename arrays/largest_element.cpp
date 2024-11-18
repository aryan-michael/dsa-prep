#include <bits/stdc++.h>
using namespace std;

// Brute force approach is when you apply any sorting algorithm to the array and return the last element
// Time complexity will be O(nlogn)

// Optimal Approach - Only 1 pass - Time complexity is O(n)
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    int largest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    cout << "the largest element is " << largest << endl;
    return 0;
}