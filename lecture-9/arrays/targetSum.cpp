#include<iostream>
using namespace std;
void targetSum(int arr[], int n, int t){
    int count = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i] + arr[j] == t){
                count++;
            }
        }
        cout << endl;
    }
    cout << count;
}

int main(){
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(int);
    int t = 30;

    targetSum(arr,n,t);

    return 0;

}