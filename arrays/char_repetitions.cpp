#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    map<char, int> Map;
    char prevChar = s[0];
    int currentStreak = 1;

    for(int i=1; i<s.size(); i++){
        if(prevChar == s[i]){
            currentStreak++;
        }
        else{
            Map[prevChar] = max(Map[prevChar], currentStreak);
            prevChar = s[i];
            currentStreak = 1;
        }
    }

    // to update the streak for the final character
    Map[prevChar] = max(Map[prevChar], currentStreak);
    
    char maxChar;
    int maxStreak = 0;
    for(auto it: Map){
        if(it.second > maxStreak){
            maxStreak = max(maxStreak, it.second);
            maxChar = it.first;
        }
    }
    cout << maxChar << ": " << maxStreak;
    //cout << maxStreak;
    cout << endl;
    return 0;
}