#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout << "how many numbers are there: " << endl;
    cin >> n;
    int LS = INT_MIN;
    int i = 1;
    cout << "enter your numbers: " << endl;
        while(n>=i){
        
        int  m;
        cin >> m;
        if(LS<m){
            LS = m;
        }
        i++;
    }
    cout << "largest number is:" << LS;

    return 0;
}