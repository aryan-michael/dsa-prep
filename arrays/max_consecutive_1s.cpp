#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {1, 1, 0, 0, 0, 2, 1, 1, 1, 1, 0, 2, 0, 1, 1};
    int n = size(arr);
    int maximum = 0;
    int count = 0;


    // Time complexity is O(n) - Space complexity is O(1)
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            count++;
            maximum = max(maximum, count);
        }
        else{
            count = 0;
        }
    }

    cout << "max is: " << maximum << endl;
    return 0;
}

    