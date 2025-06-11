#include<iostream>
using namespace std;

void incr(int a){
    a++;
    cout << a << endl;
}

int main(){
    int a = 10;

    incr(a);

    cout << a << endl;
}
