#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "enter size: " << endl;
    cin >> n;
    int arr[n];
    int target;
    cout << "enter target: " << endl;
    cin >> target;
    cout << "enter elements: " << endl;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }
    for(int i=n;i>0;i--){
        if(arr[i] == target){
            cout << i;
            break;
        }
    }
    return 0;
}

