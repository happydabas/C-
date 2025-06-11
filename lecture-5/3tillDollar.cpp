#include<iostream>
using namespace std;
int main(){
    char ch;
    int count;
    while(ch != '$'){
        ch = cin.get(); //cin.get is while spaces aur enter key bhi input bn jati h
        count++;
    }
    cout << count-1;

    return 0;
}