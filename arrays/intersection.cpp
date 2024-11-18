#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr1 = {1, 1, 2, 3, 4, 5, 5};
    vector<int> arr2 = {3, 3, 4, 5, 6, 6};
    
    int n1 = arr1.size();
    int n2 = arr2.size();

    // Brute force approach - Time complexity is O(n1 * n2) and space complexity is O(n2)
    // int visited[n2] = {0};
    // vector<int> intersectionArr;

    // for(int i=0; i<n1; i++){
    //     for(int j=0; j<n2; j++){
    //         if(arr1[i] == arr2[j] && visited[j] == 0){
    //             intersectionArr.push_back(arr1[i]);
    //             visited[j] = 1;
    //             break;
    //         }
    //         if(arr1[i] < arr2[j]) break;
    //     }
    // }

    // for(auto it: intersectionArr) cout << it << " ";

    // Optimal approach - 2 pointer approach depends on both arrays being sorted
    // Time complexity is O(n1+n2) and no extra space is used so Space complexity is O(1)
    int i = 0;
    int j = 0;
    vector<int> intersectionArr;

    while(i<n1 && j<n2){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr2[j] < arr1[i]){
            j++;
        }
        else{
            intersectionArr.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    for(auto it: intersectionArr) cout << it << " ";

    cout << endl;
    return 0;
}