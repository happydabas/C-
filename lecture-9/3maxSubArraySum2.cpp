#include<iostream>
#include<climits>
using namespace std;

int maxSubarraySum(int arr[], int n){

    int maxSoFar = INT_MIN;

    for(int i=0;i <=n-1; i++){

        for(int j=i; j<=n-1; j++){
            int psum[n];
            psum[i] = psum[i-1] + arr[i];


        }
        cout << endl;
    }
    
}

int main(){

    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(n);

    int psum[100];
    

    int ans = maxSubarraySum(arr,n);
    cout << ans;

    return 0;
}