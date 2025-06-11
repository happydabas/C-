#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout << "how many numbers are there: " << endl;
    cin >> n;
    int i = 1;
    int SN = INT_MAX;
    cout << "enter your numbers: " << endl;
        while(n>=i){
        int  m;
        cin >> m;
        if(SN>m){
            SN = m;
        }
        i++;
    }
    cout << "smallest number is:" << SN;

    return 0;
}