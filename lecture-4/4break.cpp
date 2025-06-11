#include<iostream>
using namespace std;
int main(){
    int count = 0;
    int data;
    while(true){
        cin >> data;
        if(data < 0){
            break;                 //jis loop ki body me break hota h hum us loop se bahar aa jate h
        }
        count++;
    }
    cout << count ;

    return 0;
}