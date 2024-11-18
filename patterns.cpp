#include <iostream>
using namespace std;

void pattern1(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n){
    for (int i=1; i<=n; i++){
		for (int j=1; j<=i; j++){
			cout << j << " ";
		}
		cout << endl;
	}
}

void pattern4(int n){
    for (int i=1; i<=n; i++){
		for (int j=1; j<=i; j++){
			cout << i << " ";
		}
		cout << endl;
	}
}

void pattern5(int n){
    for (int i=0; i<n; i++){
        for (int j=n-1; j>=i; j--){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n){
    for (int i=1; i<=n; i++){
        for (int j=1; j<=n-i+1; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern7(int n){
    for (int i=1; i<=n; i++){
        // space
        for (int j=1; j<=n-i; j++){
            cout << " ";
        }
        //star
        for (int j=1; j<=(2*i)-1; j++){
            cout << "*";
        }

        //space
        for (int j=1; j<=n-i; j++){
            cout << " ";
        }
        
        cout << endl;
    }
}

void pattern8(int n){
    for (int i=0; i<n; i++){
        // space
        for (int j=0; j<i; j++){
            cout << " ";
        }
        //star
        for (int j=0; j<(2*n)-(2*i+1); j++){
            cout << "*";
        }

        //space
        for (int j=0; j<i; j++){
            cout << " ";
        }
        
        cout << endl;
    }
}

void pattern9(int n){
    pattern7(n);
    pattern8(n);
}

void pattern10(int n){
    for (int i=1; i<=2*n-1; i++){
        int stars = i;
        if(i > n){
            stars = 2*n-i;
        }
        for (int j=1; j<=stars; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern11(int n){
    int start = 1;
    for (int i=0; i<n; i++){
        if (i % 2 == 0) start = 1;
        else start = 0;
        for (int j=0; j<=i; j++){
            cout << start << " ";
            start = 1 - start;
        }
        cout << endl;
    }
}

void pattern12(int n){
    for (int i=1; i<=n; i++){
        //numbers
        for (int j=1; j<=i; j++){
            cout << j << " ";
        }

        //space
        for (int j=1; j<=2*(n-i); j++){
            cout << "  ";
        }

        //numbers
        for (int j=i; j>=1; j--){
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern13(int n){
    int num = 1;
    for (int i=1; i<=n; i++){
        for (int j=1; j<=i; j++){
            cout << num << " ";
            num++;
        }
        cout << endl;
    }
}

void pattern14(int n){
    for (int i=0; i<n; i++){
        for (char j = 'A'; j<='A'+i; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern15(int n){
    for (int i=0; i<n; i++){
        for (char j = 'A'; j<='A'+(n-i-1); j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern16(int n){
    for (int i=0; i<n; i++){
        char ch = 'A' + i;
        for (char j = 0; j<=i; j++){
            cout << ch << " ";
        }
        cout << endl;
    }
}

void pattern17(int n){
    for (int i=1; i<=n; i++){
        // space
        for (int j=1; j<=n-i; j++){
            cout << " ";
        }
        //char
        char ch = 'A';
        int breakpoint = (((2*i - 1)/2) + 1);
        for (int j=1; j<=(2*i)-1; j++){
            cout << ch;
            if (j < breakpoint) ch++;
            else ch--;
        }

        //space
        for (int j=1; j<=n-i; j++){
            cout << " ";
        }
        
        cout << endl;
    }
}

// different pattern linked on code360 platform.
void pattern18(int n){
    for (int i=0; i<n; i++){
        for (char j = 'E'-i; j<='E'; j++){
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern19(int n){
    for (int i=0; i<n; i++){
        // stars
        for (int j=n-i; j>0; j--){
            cout << "* ";
        }

        // spaces
        for (int j=0; j<2*i; j++){
            cout << "  ";
        }

        // stars
        for (int j=n-i; j>0; j--){
            cout << "* ";
        }
        cout << endl;
    }
    for (int i=0; i<n; i++){
        // stars
        for (int j=0; j<=i; j++){
            cout << "* ";
        }

        // spaces
        for (int j=2*(n-i-1); j>0; j--){
            cout << "  ";
        }

        // stars
        for (int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern20(int n){
    for (int i=0; i<n-1; i++){
        // stars
        for (int j=0; j<=i; j++){
            cout << "* ";
        }

        // spaces
        for (int j=2*(n-i-1); j>0; j--){
            cout << "  ";
        }

        // stars
        for (int j=0; j<=i; j++){
            cout << "* ";
        }
        cout << endl;
    }
    for (int i=0; i<n; i++){
        // stars
        for (int j=n-i; j>0; j--){
            cout << "* ";
        }

        // spaces
        for (int j=0; j<2*i; j++){
            cout << "  ";
        }

        // stars
        for (int j=n-i; j>0; j--){
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern21(int n){
    for (int i=1; i<=n; i++){
		for (int j=1; j<=n; j++){
            if (i==1 || j==1 || i==n || j==n){
                cout << "* ";
            }
            else cout << "  ";
        }
        cout << endl;
	}
}

// needs to be understood in depth.
void pattern22(int n){
    for (int i=0; i<2*n-1; i++){
		for (int j=0; j<2*n-1; j++){
            int top=i;
            int left=j;
            int right=((2*n-1)-1)-j;
            int bottom=((2*n-1)-1)-i;
            cout << (n-min(min(top, bottom), min(left, right))) << " ";
        }
        cout << endl;
	}
}

int main(){
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;
    pattern22(rows);
    return 0;
}