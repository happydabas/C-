#include<iostream>
#include<climits>
using namespace std;

int maxSubarraySum(int arr[], int n){

    int maxSoFar = INT_MIN;

    for(int i=0;i <=n-1; i++){

        for(int j=i; j<=n-1; j++){

            int sum = 0;

            for(int k = i; k <=j; k++){
                sum += arr[k];
            }

            maxSoFar = max(maxSoFar, sum);
        }
        cout << endl;
    }
    return maxSoFar;
    
}

int main(){

    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(n);

    maxSubarraySum(arr,n);

    return 0;
}