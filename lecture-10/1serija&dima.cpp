#include<iostream>
using namespace std;

int main(){
    int arr[] = {4, 1, 2, 10 };
    int n = sizeof(arr) / sizeof(int);
    int i = 0;
    int j = n-1;
    int s = 0;
    int d = 0;

    bool flag = true;

    while(i<=j){
        if(arr[i] > arr[j]){
            s = s + arr[i];
            i++;
        }
        else{
            s = s + arr[j];
            j--;
        }

        if(arr[i] > arr[j]){
            d = d + arr[i];
            i++;
        }
        else{
            d = d + arr[j];
            j--;
        }


    }
    cout << s << ", " << d;


    return 0;
}