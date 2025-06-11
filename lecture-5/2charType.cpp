#include<iostream>
using namespace std;
int main(){
    char x;
    cin >> x;

    if(x >= 65 and x <=90){
        cout << "uppercase" << endl;
    }
    //if (ch >= 'A' and ch <= 'Z') {cout << "uppercase" << endl;}
    else if(x >= 97 and x<= 122){
        cout << "lowercase" << endl;
    }
    else if(x >= 48 and x<=57){
        cout << "digit" << endl;
    }
    else{
        cout << "spcial character" << endl;
    }

    return 0;
}