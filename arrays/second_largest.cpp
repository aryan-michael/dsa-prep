#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    // Brute force approach - sort the array, largest will be arr[n-1]. iterate over the array from n-2 to i, return true when arr[i] != arr[n-1]
    // Time complexity is O(nlogn + n)

    // Better approach - Time complexity is O(n+n)
    // int largest = arr[0];
    // for(int i=0; i<n; i++){
    //     if(arr[i] > largest){
    //         largest = arr[i];
    //     }
    // }
    // int sLargest = -1; // assuming that array contains positive integers, INT_MIN if there are negative elements
    // for(int j=0; j<n; j++){
    //     if(arr[j] > sLargest && arr[j] != largest){
    //         sLargest = arr[j];
    //     }
    // }
    // cout << "second largest element is " << sLargest << endl;

    // Optimal approach - Time complexity is O(n)
    int largest = arr[0];
    int sLargest = -1; // assuming that array contains positive integers, INT_MIN if there are negative elements
    for(int i=1; i<n; i++){
        if(arr[i] > largest){
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > sLargest){
            arr[i] = sLargest;
        }
    }

    cout << "second largest element is " << sLargest << endl;

    return 0;
}