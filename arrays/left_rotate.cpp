#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];
    cout << "enter elements of the array: ";
    for(int i=0; i<n; i++) cin >> arr[i];

    // Left rotating array by 1 space

    // No Brute force approach
    // Optimal approach - Time complexity is O(n) because we just make 1 pass
    // int temp = arr[0];
    // for(int i=1; i<n; i++){
    //     arr[i-1] = arr[i];
    // }
    // arr[n-1] = temp;

    // for(int i=0; i<n; i++) cout << arr[i] << " ";
    // cout << endl;


    // Left rotating array by D spaces - Brute force approach - O(n+d) - Space complexity is O(d) because extra array is created.

    // int d = d % n; // number of spaces to move the array by, modulo because the array cycles to the same space after n rotations.
    // cout << "enter spaces to move the array by: ";
    // cin >> d;
    // int temp[d];

    // // added the elements until d into the temp array
    // for(int i=0; i<d; i++){
    //     temp[i] = arr[i];
    // }
    
    // // move the array by d places
    // for(int i=d; i<n; i++){
    //     arr[i-d] = arr[i];
    // }

    // // add the elements in temp to their right place in array
    // for(int i=n-d; i<n; i++){
    //     arr[i] = temp[i-(n-d)];
    // }

    // cout << "rotated array: ";
    // for(auto it: arr) cout << it << " ";

    // Optimal approach - Time complexity is O(2n) - Space complexity is O(1)
    int d = d % n; // number of spaces to move the array by, modulo because the array cycles to the same space after n rotations.
    cout << "enter spaces to move the array by: ";
    cin >> d;

    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);

    for(int i=0; i<n; i++) cout << arr[i] << " ";
    
    cout << endl;
    return 0;
}