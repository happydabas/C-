#include<iostream>
using namespace std;
int main(){
    int num;
    cout << "enter your number: " << endl;
    cin >> num;
    if(num<0){
        cout << "number is negative" << endl;
    }
    else if(num == 0){
        cout << "number is zero" << endl;
    }
    else{
        cout << "number is positive" << endl;
    }
    return 0;
} 