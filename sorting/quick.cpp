#include <bits/stdc++.h>
using namespace std;

int partition(vector <int> &arr, int low, int high){
    int pivot = arr[low]; // choosing the element on the 1st index as the pivot
    int i = low;
    int j = high;
    while(i<j){ // run this loop until j crosses i
        while(arr[i] <= pivot && i <= high - 1){ // starting to look for a number greater than the pivot from the left
            i++;
        }
        while(arr[j] > pivot && j >= low + 1){ // starting to look for a number lesser than the pivot from the right
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]); // if we break out of the while loop, which means j has crossed i, it's time for the pivot to come to it's correct place
    return j; // we return j because that is the pIndex that needs to be received by the quick_sort function
}

void quick_sort(vector <int> &arr, int low, int high){
    if(low < high){ // this condition means that there is more than 1 element in the array, no need of sorting if there's just 1 element
        int pIndex = partition(arr, low, high);
        quick_sort(arr, low, pIndex-1);
        quick_sort(arr, pIndex+1, high);
    }
}

int main(){
    int n;
    cin >> n;
    vector <int> arr(n);
    for(int i=0; i<n; i++) cin >> arr[i];
    quick_sort(arr, 0, n-1);
    for(int i=0; i<n; i++) cout << arr[i] << " ";
    cout << endl;
    return 0;
}