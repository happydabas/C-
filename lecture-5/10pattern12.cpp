#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m = n - n/2;
    for(int i = 0; i<n;i++){
        cout << "*";
    }
    cout << endl;
    for(int i = 0;i<m-1;i++){
        for(int j = 0;j<m-i-1;j++){
            cout << "*";
        }
        for(int j=0;j<(2*i)+1;j++){
            cout << "-";
        }
        for(int j = 0;j<m-i-1;j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0;i<m-2;i++){
        for(int j = 0;j<=i+1;j++){
            cout << "*";
        }
        for(int j=0;j<2*(m-i-2)-1;j++){
            cout << "-";
        }
        for(int j = 0;j<=i+1;j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i = 0; i<n;i++){
        cout << "*";
    }
    cout << endl;

    return 0;
}