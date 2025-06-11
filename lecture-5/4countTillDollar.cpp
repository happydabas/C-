#include<iostream>
using namespace std;
int main(){
    char x;
    int uppercase = 0;
    int lowercase = 0;
    int digit = 0;
    int special = 0;
    int space = 0;
    while(x != '$'){
        x = cin.get();      // cin.get() ----> ye white spaces aur enter ko bhi input lega
        if(x >= 65 and x <=90){
        uppercase++;
        }
    else if(x >= 97 and x<= 122){
        lowercase++;
        }
    else if(x >= 48 and x<=57){
        digit++;
        }
    else if(x = ' ' or x == '\t' or x == '\n'){
        space++;
    }
    else{
        special++;
        }
    }
    cout << uppercase << " " << lowercase << " " << digit << " " << space << " " << special << endl;

    return 0;
}