#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n&1 == 1){
        cout << "odd";
    }
    else{
        cout << "even";

    }

    // n&1 ? cout << "odd" ; cout << "even";

    return 0;
}