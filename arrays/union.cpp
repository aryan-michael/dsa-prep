#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr1 = {1, 1, 2, 3, 4, 5, 5};
    vector<int> arr2 = {3, 3, 4, 5, 6, 6};
    int n1 = arr1.size();
    int n2 = arr2.size();

    // Brute force approach - Time complexity is O(n1logn + n2logn) + O(n1+n2) {this is not used for solving the problem but return the solution}
    // set<int> st;
    // int uni[size(st)];

    // for(int i=0; i<size(arr1); i++){
    //     st.insert(arr1[i]); // O(n1logn) - where n is the size of the set
    // }

    // for(int i=0; i<size(arr2); i++){
    //     st.insert(arr2[i]); // O(n2logn) - where n is the size of the set
    // }

    // // for(auto it: st) cout << it << " ";
    // for(int i=0; i<size(st); i++){
    //     uni.insert[st(i)]; // O(n1+n2) - worst case
    // }

    // Optimal approach - 2 pointer approach because both arrays are sorted - Time complexity is O(n1+n2)
    // Space complexity is O(n1+n2) in the worst case in order to just return the answer
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while(i<n1 && j<n2){
        if(arr1[i] <= arr2[j]){
            if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
        }
        else{
            if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
        }
    }

    while(j<n2){
        if(unionArr.size() == 0 || unionArr.back() != arr2[j]){
                unionArr.push_back(arr2[j]);
            }
            j++;
    }

    while(i<n1){
        if(unionArr.size() == 0 || unionArr.back() != arr1[i]){
                unionArr.push_back(arr1[i]);
            }
            i++;
    }


    for(auto it: unionArr) cout << it << " ";
    cout << endl;

    return 0;
}