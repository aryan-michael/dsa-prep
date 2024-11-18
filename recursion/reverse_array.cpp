#include <bits/stdc++.h>
using namespace std;

void reverse_array(int i, int arr[], int n){
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    reverse_array(i+1, arr, n);
}

int main(){
    int n;
    cout << "enter length of array: ";
    cin >> n;
    cout << endl;

    int arr[n];
    cout << "enter elements of the array: " <<  endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << endl;

    reverse_array(0, arr, n);
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}