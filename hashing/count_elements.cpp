#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];

    // pre-compute
    int hash[10] = {0}; // hash array has to be initialised as 0 because compiler fills it up with garbage values inside main function
    // if hash array is initialised globally that it not needed as compiler automatically does it
    for(int i=0; i<n; i++) hash[arr[i]] += 1;

    // fetch
    int queries;
    cout << "Enter number of queries: ";
    cin >> queries;
    while(queries--){
        int num;
        cin >> num;
        cout << hash[num] << " ";
        cout << endl;
    }
    return 0;
}