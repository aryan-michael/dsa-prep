#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    int digits = 0;
        while (n>0){
            int digit = n % 10;
            digits++;
            n = n / 10;
        }
    cout << digits << endl;
    return 0;
}

    