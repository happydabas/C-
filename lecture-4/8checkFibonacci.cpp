#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if (n == 0 || n == 1){
        cout << "fibonaci" << endl;
    }
    else{
        int a = 0;
        int b = 1;
        int i = 1;
        while(i <= n - 1){
            int c = a + b;
            a = b;
            b = c;
            i = i +1;
            if(c == n){
                cout << "fibonacci" << endl;
                return 0;
            }
        }
    }
    cout << "not fibonacci" << endl;
    return 0;
}