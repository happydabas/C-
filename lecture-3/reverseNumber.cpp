#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "enter number: ";
    cin >> num;
    int ans = 0;
    while(num>0){
        // method 1
        ans = ans*10 + num%10;
        num = num/10;
        
        // method 2
        // cout << num%10;
        // num = num/10;
    }
    cout << "sum is:" << ans;
    return 0;
}