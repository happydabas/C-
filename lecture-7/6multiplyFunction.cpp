#include<iostream>
using namespace std;

int multiply(int a, int b){
    // int c = a * b;
    // return c;
    return a * b;
}

int main(){

    int a = 2;
    int b = 3;
    cout << multiply(a, b);

    cout << multiply(2,3) << endl;
    cout << multiply(4,5) << endl;
    cout << multiply(10,20) + 100 << endl;

    return 0;
}
