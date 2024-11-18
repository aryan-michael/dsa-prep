// Question 1:

// Given a range of numbers [left, right], both ends inclusive, where 100 ≤ left ≤ right ≤ 999, count the number of three-digit numbers having all three digits pairwise distinct (meaning that no two digits are the same). It is guaranteed that all numbers within a range have exactly three digits.

// Note: You are not expected to provide the most optimal solution, but a solution with time complexity not worse than O(right2) will fit within the execution time limit.

// Example

// For left = 876 and right = 890, the output should be solution(left, right) = 3.

// Explanation
// The numbers 876, 879, 890 are the only numbers in the range that have all three digits pairwise distinct.

// Input/Output

// [execution time limit] 4 seconds (py3)

// [memory limit] 1 GB

// [input] integer left

// An integer representing the lower bound of the given number range.

// Guaranteed constraints:
// 100 ≤ left ≤ right ≤ 999.

// [input] integer right

// An integer representing the upper bound of the given number range.

// Guaranteed constraints:
// 100 ≤ left ≤ right ≤ 999.

// [output] integer

// The number of three-digit numbers in the given number range that have all digits pairwise distinct.

#include <bits/stdc++.h>
using namespace std;

int main(){
    int left, right;
    cout << "enter left: ";
    cin >> left;
    cout << "enter left: ";
    cin >> right;
    int count = 0;

    for(int i=left; i<=right; i++){
        int hundreds_digits = i / 100;
        int tens_digit = (i / 10) % 10;
        int unit_digit = i % 10;

        if(hundreds_digits != tens_digit && tens_digit != unit_digit && hundreds_digits != unit_digit){
            count++;
        }

    }

    cout << "Count is: " << count;
    cout << endl;
    return 0;
}