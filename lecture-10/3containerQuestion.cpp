#include<iostream>
using namespace std;

int main(){
    int arr[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int n = sizeof(arr) / sizeof(int);

    int maxArea = 0;
    for(int i=0; i<=n-2; i++){
        for(int j=i+1; j<=n-1; j++){
            int area = (j-i) * (min(arr[i], arr[j]));
            maxArea = max(maxArea, area);
        }
    }
    cout << maxArea;
}