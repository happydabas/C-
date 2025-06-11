#include<iostream>
using namespace std;
int main(){

    int p;
    int r;
    int t;
    cout << "enter principal: " << endl;
    cin >> p;
    cout << "enter rate: " << endl;
    cin >> r;
    cout << "enter time: " << endl;
    cin >> t;

    cout << "simple interest is: " << ((float)p*r*t)/100;

    return 0;
}