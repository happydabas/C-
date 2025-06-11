#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout << "enter number: " << endl;;
    cin >> n;
    int i = 2;
    int rootn = sqrt(n);
    while(i<=rootn){
        if(n%i == 0){
            cout << "not prime";
            break;
        }
        i++; 
    }
    if(i>rootn){
        cout << "prime";
    }



    return 0;
}