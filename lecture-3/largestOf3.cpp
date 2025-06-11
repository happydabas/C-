#include<iostream>
using namespace std;
int main(){
    int a;
    int b;
    int c;
    cout << "enter your numbers: " << endl;
    cin >> a >> b >> c;
    if(a > b && a > c){
        cout << a << " is largest" << endl;
    }
    else if(b>c){
        cout << b << " is largest" << endl;
    }
    else{
        cout << c << " is largest" << endl;
    }

    return 0;
}