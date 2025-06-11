#include<iostream>
using namespace std;
int main(){
    int size;
    cin >> size;
    int longestRun = 0;
    int one = 0;

    int arr[size];

    for(int i=0;i<size;i++){
        cin >> arr[i];
    }

    for(int i=0;i<size;i++){
        if(arr[i] == 1){
            one++;
        }
        else if(arr[i] == 0){
            if(one>longestRun){
                longestRun = one;
            }
            one = 0;
        }2
    }
    cout << longestRun;


    return 0;
}