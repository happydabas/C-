#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int k;
    cin >> k;

    int num = ~(1 << k); // ----> ye mask h. mask vo hota h jiske sath operation(using bitwise operators) krte h
    
    int ans = n & num;
    cout << ans;


    return 0;
}