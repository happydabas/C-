#include<iostream>
using namespace std;
int main(){
    char d;
    int x = 0;
    int y = 0;
    while(true){
        d = cin.get();
        if(d=='\n'){
            break;
        }
        else if(d=='N'){
            y++;
        }
        else if(d=='S'){
            y--;
        }
        else if(d=='W'){
            x--;
        }
        else if(d=='E'){
            x++;
        }
    }
    if(x>0){
        for(int i=0;i<x;i++){
            cout << 'E';
        }
    }
    if(y>0){
        for(int i=0;i<y;i++){
            cout << 'N';
        }
    }
    if(y<0){
        for(int i=0;i<-y;i++){
            cout << 'S';
        }
    }
    if(x<0){
        for(int i=0;i<-x;i++){
            cout << 'W';
        }
    }



    return 0;
}