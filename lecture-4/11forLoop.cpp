#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    // for(int i = 0; i<n; i++){
    //     cout << i << " ";
    // }


    for(int i = 1, j = 1; i<n, j>i ;i++, j--){
        cout << i << " " << j << endl;
    }
}