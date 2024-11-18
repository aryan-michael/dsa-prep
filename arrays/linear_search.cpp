#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {6, 5, 4, 1, 0, 1, 5};
    cout << "enter the 1st occurence of number: ";
    int num;
    cin >> num;
    int index;

    for(int i=0; i<size(arr); i++){
        if(arr[i] == num){
            index = i;
            break;
        }
    }
    cout << "index is: " << index << endl;
    return 0;
}