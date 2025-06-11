#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int m = n - n/2;
    for(int i=0;i<m-1;i++){
        for(int j = 0; j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<m-i;j++){
            cout << "*";
        }
        cout << endl;
    }



    return 0;
}