#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1;i<=n-1;i++){
        //in the ith pass, you want to insert the key i.e.,, 1st element
        //of he unsorted part of the arr[] to its correct position in
        // the sorted part of the arr[]

        int key = arr[i];

        int j =  i - 1;

        while(j >= 0 and key < arr[j]){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;

    }
}

int main(){
    int arr[] = {50, 40, 30, 20, 10};
    int n = sizeof(arr) / sizeof(int);

    insertionSort(arr, n);

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

    cout << endl;
 
    return 0;
}